
/*  ecomcon.c
    Douglas Crockford
    2019-05-05

    Public Domain

    Ecomcon is a simple preprocessor. It enables comments conditionally. The
    comments can be enabled by supplying tag names on the command line. These
    comments are normally ignored, and will be removed by JSMin. But ecomcon
    will activate these comments, making them executable. They can be used for
    development time activities like debugging, testing, logging, or tracing. A
    conditional comment is a '//' style comment that starts at the left margin.
    The '//' is immediately followed by a <tag>. There must be no space between