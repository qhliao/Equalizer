
/* Copyright (c) 2009, Stefan Eilemann <eile@equalizergraphics.com>
 *                   , Sarah Amsellem <sarah.amsellem@gmail.com>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License version 2.1 as published
 * by the Free Software Foundation.
 *  
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef EQ_ACCUMBUFFEROBJECT_H
#define EQ_ACCUMBUFFEROBJECT_H

#include "frameBufferObject.h"
#include "texture.h"

namespace eq
{
    /** A C++ class to abstract OpenGL accumulation buffer objects */
    class AccumBufferObject : public FrameBufferObject
    {
    public: 
        /** Construct a new Accumulation Buffer Object */
        EQ_EXPORT AccumBufferObject( GLEWContext* const glewContext );

        /** Destruct the Accumulation Buffer Object */
        EQ_EXPORT ~AccumBufferObject();

        /**
         * Initialize the Accumulation Buffer Object.
         * 
         * @param width the initial width of the rendering buffer.
         * @param height the initial height of the rendering buffer.
         * @param textureFormat the texture format.
         * @return true on success, false otherwise
         */
        EQ_EXPORT bool init( const int width, const int height,
                             GLuint textureFormat );

        /** De-initialize the Accumulation Buffer Object. */
        EQ_EXPORT void exit();

        /**
         * Load the current read buffer into the accumulation buffer.
         * The read buffer texture overwriting the current component.
         *
         * @param value a floating-point value used for accumulation buffer
         * operation.
         */
        EQ_EXPORT void load( GLfloat value );

        /**
         * Accumulate the current read buffer into the accumulation buffer.
         * The read buffer texture is multiplied by value and added to
         * the current component.
         *
         * @param value a floating-point value used for accumulation buffer
         * operation.
         */
        EQ_EXPORT void accum( GLfloat value );

        /**
         * Transfers accumulation buffer values to the write buffer.
         * Each component is multiplied by value.
         *
         * @param value a floating-point value used for accumulation buffer
         * operation.
         */
        EQ_EXPORT void returnResult( GLfloat value );

    private:
        void _drawQuadWithTexture( Texture* texture, GLfloat value );

        Texture* _texture;
    };
}


#endif //EQ_ACCUMBUFFEROBJECT_H
