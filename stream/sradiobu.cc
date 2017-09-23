#ifndef NO_STREAM

#define Uses_TRadioButtons
#define Uses_TStreamableClass
#include <tv.h>

__link( RCluster )
TStreamableClass TV_EXPORT RRadioButtons( TRadioButtons::name,
                                TRadioButtons::build,
                                __DELTA(TRadioButtons)
                              );
TStreamableClass TV_EXPORT RRadioButtons32( TRadioButtons32::name,
                                  TRadioButtons32::build,
                                  __DELTA(TRadioButtons32)
                                );

#endif

