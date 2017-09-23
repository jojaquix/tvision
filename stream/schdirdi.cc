#ifndef NO_STREAM

#define Uses_TChDirDialog
#define Uses_TStreamableClass
#include <tv.h>
__link( RDialog )
__link( RButton )
__link( RDirListBox )

TStreamableClass TV_EXPORT RChDirDialog( TChDirDialog::name,
                               TChDirDialog::build,
                               __DELTA(TChDirDialog)
                             );

#endif

