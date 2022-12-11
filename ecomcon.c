
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
    the slashes and the <tag>.

        //<tag> <stuff>

    If the <stuff> starts with a letter or digit, then a space must be placed
    between <tag> and <stuff>.

    The command line will contain a list of <tag> names.

    A <tag> may contain any short sequence of ASCII letters, digits, and
    underbar '_'. The active <tag> strings are declared in the command line.
    All <tag>s that are not declared in the command line are deleted.

    A command line can contain zero or more comments.