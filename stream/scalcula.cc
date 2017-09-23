#ifndef NO_STREAM

#define Uses_TCalculator
#define Uses_TStreamableClass
#include <tv.h>
__link( RView )
__link( RDialog )
__link( RButton )

TStreamableClass TV_EXPORT RCalculator( TCalculator::name,
                              TCalculator::build,
                              __DELTA(TCalculator)
                            );

#endif

