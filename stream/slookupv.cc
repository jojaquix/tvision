#ifndef NO_STREAM

#define Uses_TStreamableClass
#define Uses_TStringLookupValidator
#include <tv.h>

TStreamableClass TV_EXPORT RStringLookupValidator( TStringLookupValidator::name,
                         TStringLookupValidator::build,
                         __DELTA(TStringLookupValidator)
                       );

TStreamableClass TV_EXPORT RLookupValidator( TLookupValidator::name,
                         TLookupValidator::build,
                         __DELTA(TLookupValidator)
                       );

#endif

