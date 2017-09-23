#ifndef NO_STREAM

#define Uses_TStreamableClass
#define Uses_TMemo
#include <tv.h>
__link( REditor )

TStreamableClass TV_EXPORT RMemo( TMemo::name,
                        TMemo::build,
                        __DELTA(TMemo)
                      );

#endif

