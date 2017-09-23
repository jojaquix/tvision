#ifndef NO_STREAM

#define Uses_TButton
#define Uses_TStreamableClass
#include <tv.h>
__link( RView )

TStreamableClass TV_EXPORT RButton( TButton::name,
                          TButton::build,
                          __DELTA(TButton)
                        );

#endif

