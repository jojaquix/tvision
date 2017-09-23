/*
 *      Turbo Vision - Version 2.0
 *
 *      Copyright (c) 1994 by Borland International
 *      All Rights Reserved.
 *

Modified by Robert H�hne to be used for RHIDE.

 *
 *
 */

#if defined( Uses_TStrIndexRec ) && !defined( __TStrIndexRec )
#define __TStrIndexRec

class TV_EXPORT TStrIndexRec
{

public:

    TStrIndexRec();

    ushort key;
    ushort count;
    ushort offset;

};

#endif  // Uses_TStrIndexRec

