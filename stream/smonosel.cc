#ifndef NO_STREAM

#define Uses_TMonoSelector
#define Uses_TStreamableClass
#include <tv.h>
__link( RCluster )

TStreamableClass TV_EXPORT RMonoSelector( TMonoSelector::name,
                                TMonoSelector::build,
                                __DELTA(TMonoSelector)
                              );

#endif

