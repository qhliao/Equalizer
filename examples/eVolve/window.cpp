
/* Copyright (c) 2007, Stefan Eilemann <eile@equalizergraphics.com> 
   All rights reserved. */

#include "window.h"
#include "pipe.h"

using namespace std;

namespace eVolve
{

bool Window::configInit( const uint32_t initID )
{
#if !defined(Darwin) || !defined(GLX)
    // Enable alpha channel
    // Note: Apple's glX implementation has a bug in that it does not expose
    // visuals with alpha, even though they do have alpha.
    setIAttribute( IATTR_PLANES_ALPHA, 8 );
#endif

    if( !eq::Window::configInit( initID ))
        return false;

    // Check if we have a drawable with alpha
    eq::Window::DrawableConfig drawableConfig = getDrawableConfig();
    if( !drawableConfig.alphaBits )
    {
        setErrorMessage( "OpenGL drawable has no alpha channel. Try: 'global { EQ_WINDOW_IATTR_PLANES_ALPHA 1 }' in config file" );
        return false;
    }

    _loadLogo();
    return true;
}

bool Window::configInitGL( const uint32_t initID )
{
    Pipe* pipe = static_cast<Pipe*>( getPipe() );
    if( !pipe->LoadShaders() )
        return false;

    glEnable( GL_SCISSOR_TEST ); // needed to constrain channel viewport

    return true;
}

static const char* _logoTextureName = "eVolve_logo";

void Window::_loadLogo()
{
    eq::Window::ObjectManager* objects = getObjectManager();

    if( objects->getTexture( _logoTextureName ) != 
        eq::Window::ObjectManager::FAILED );
    {
        // Already loaded by first window
        const eq::Pipe* pipe        = getPipe();
        const Window*   firstWindow = static_cast< Window* >
                                          ( pipe->getWindows()[0] );
        
        _logoTexture = firstWindow->_logoTexture;
        _logoSize    = firstWindow->_logoSize;
        return;
    }

    eq::Image image;
    if( !image.readImage( "logo.rgb", eq::Frame::BUFFER_COLOR ) &&
        !image.readImage( "examples/eVolve/logo.rgb", eq::Frame::BUFFER_COLOR ))
    {
        EQWARN << "Can't load overlay logo 'logo.rgb'" << endl;
        return;
    }

    _logoTexture = objects->newTexture( _logoTextureName );
    EQASSERT( _logoTexture != eq::Window::ObjectManager::FAILED );

    const eq::PixelViewport& pvp = image.getPixelViewport();
    _logoSize.x = pvp.w;
    _logoSize.y = pvp.h;

    glBindTexture( GL_TEXTURE_RECTANGLE_ARB, _logoTexture );
    glTexImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, 
                  image.getFormat( eq::Frame::BUFFER_COLOR ),
                  _logoSize.x, _logoSize.y, 0,
                  image.getFormat( eq::Frame::BUFFER_COLOR ), 
                  image.getType( eq::Frame::BUFFER_COLOR ),
                  image.getPixelData( eq::Frame::BUFFER_COLOR ));

    EQINFO << "Created logo texture of size " << _logoSize << endl;
}

}
