#ifndef NO_STREAM

#define Uses_TColorSelector
#define Uses_TStreamableClass
#include <tv.h>
__link( RView )

TStreamableClass TV_EXPORT RColorSelector( TColorSelector::name,
                                 TColorSelector::build,
                                 __DELTA(TColorSelector)
                               );

#endif

