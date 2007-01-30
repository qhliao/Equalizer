typedef union{
    const char*             _string;
    int                     _int;
    unsigned                _unsigned;
    float                   _float;
    eqNet::ConnectionType   _connectionType;
    float                   _viewport[4];
} YYSTYPE;
#define	EQTOKEN_GLOBAL	258
#define	EQTOKEN_CONNECTION_SATTR_HOSTNAME	259
#define	EQTOKEN_CONNECTION_SATTR_LAUNCH_COMMAND	260
#define	EQTOKEN_CONNECTION_IATTR_TYPE	261
#define	EQTOKEN_CONNECTION_IATTR_TCPIP_PORT	262
#define	EQTOKEN_CONNECTION_IATTR_LAUNCH_TIMEOUT	263
#define	EQTOKEN_CONFIG_FATTR_EYE_BASE	264
#define	EQTOKEN_WINDOW_IATTR_HINT_STEREO	265
#define	EQTOKEN_WINDOW_IATTR_HINT_DOUBLEBUFFER	266
#define	EQTOKEN_WINDOW_IATTR_HINT_FULLSCREEN	267
#define	EQTOKEN_WINDOW_IATTR_HINT_DECORATION	268
#define	EQTOKEN_WINDOW_IATTR_PLANES_COLOR	269
#define	EQTOKEN_WINDOW_IATTR_PLANES_ALPHA	270
#define	EQTOKEN_WINDOW_IATTR_PLANES_DEPTH	271
#define	EQTOKEN_WINDOW_IATTR_PLANES_STENCIL	272
#define	EQTOKEN_COMPOUND_IATTR_STEREO_MODE	273
#define	EQTOKEN_COMPOUND_IATTR_STEREO_ANAGLYPH_LEFT_MASK	274
#define	EQTOKEN_COMPOUND_IATTR_STEREO_ANAGLYPH_RIGHT_MASK	275
#define	EQTOKEN_CHANNEL_IATTR_HINT_STATISTICS	276
#define	EQTOKEN_SERVER	277
#define	EQTOKEN_CONFIG	278
#define	EQTOKEN_APPNODE	279
#define	EQTOKEN_NODE	280
#define	EQTOKEN_PIPE	281
#define	EQTOKEN_WINDOW	282
#define	EQTOKEN_ATTRIBUTES	283
#define	EQTOKEN_HINT_STEREO	284
#define	EQTOKEN_HINT_DOUBLEBUFFER	285
#define	EQTOKEN_HINT_FULLSCREEN	286
#define	EQTOKEN_HINT_DECORATION	287
#define	EQTOKEN_HINT_STATISTICS	288
#define	EQTOKEN_PLANES_COLOR	289
#define	EQTOKEN_PLANES_ALPHA	290
#define	EQTOKEN_PLANES_DEPTH	291
#define	EQTOKEN_PLANES_STENCIL	292
#define	EQTOKEN_ON	293
#define	EQTOKEN_OFF	294
#define	EQTOKEN_AUTO	295
#define	EQTOKEN_FASTEST	296
#define	EQTOKEN_NICEST	297
#define	EQTOKEN_QUAD	298
#define	EQTOKEN_ANAGLYPH	299
#define	EQTOKEN_RED	300
#define	EQTOKEN_GREEN	301
#define	EQTOKEN_BLUE	302
#define	EQTOKEN_CHANNEL	303
#define	EQTOKEN_COMPOUND	304
#define	EQTOKEN_CONNECTION	305
#define	EQTOKEN_NAME	306
#define	EQTOKEN_TYPE	307
#define	EQTOKEN_TCPIP	308
#define	EQTOKEN_HOSTNAME	309
#define	EQTOKEN_COMMAND	310
#define	EQTOKEN_TIMEOUT	311
#define	EQTOKEN_TASK	312
#define	EQTOKEN_EYE	313
#define	EQTOKEN_EYE_BASE	314
#define	EQTOKEN_BUFFER	315
#define	EQTOKEN_CLEAR	316
#define	EQTOKEN_DRAW	317
#define	EQTOKEN_ASSEMBLE	318
#define	EQTOKEN_READBACK	319
#define	EQTOKEN_COLOR	320
#define	EQTOKEN_DEPTH	321
#define	EQTOKEN_CYCLOP	322
#define	EQTOKEN_LEFT	323
#define	EQTOKEN_RIGHT	324
#define	EQTOKEN_VIEWPORT	325
#define	EQTOKEN_RANGE	326
#define	EQTOKEN_DISPLAY	327
#define	EQTOKEN_SCREEN	328
#define	EQTOKEN_WALL	329
#define	EQTOKEN_BOTTOM_LEFT	330
#define	EQTOKEN_BOTTOM_RIGHT	331
#define	EQTOKEN_TOP_LEFT	332
#define	EQTOKEN_SYNC	333
#define	EQTOKEN_LATENCY	334
#define	EQTOKEN_SWAPBARRIER	335
#define	EQTOKEN_OUTPUTFRAME	336
#define	EQTOKEN_INPUTFRAME	337
#define	EQTOKEN_STEREO_MODE	338
#define	EQTOKEN_STEREO_ANAGLYPH_LEFT_MASK	339
#define	EQTOKEN_STEREO_ANAGLYPH_RIGHT_MASK	340
#define	EQTOKEN_STRING	341
#define	EQTOKEN_FLOAT	342
#define	EQTOKEN_INTEGER	343
#define	EQTOKEN_UNSIGNED	344


extern YYSTYPE eqLoader_lval;
