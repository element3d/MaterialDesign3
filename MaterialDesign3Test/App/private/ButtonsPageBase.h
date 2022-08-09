
#ifndef __ButtonsPageBase_H__
#define __ButtonsPageBase_H__

#include <e3/ViewFactory.h>
#include <MDIconButton.h>
#include <MDScaffold.h>
#include <MDAppBar.h>
#include <MDAppBarTitle.h>
#include <MDText.h>
#include <MDTextButton.h>
#include <MDOutlinedButton.h>
#include <MDElevatedButton.h>
#include <MDFilledButton.h>
#include <MDFAB.h>
#include <MDLargeFAB.h>
#include <MDSmallFAB.h>
#include <MDFloatingActionButtonExtended.h>
#include "MDElement.h"


class ButtonsPageBase : public MDElement
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    ButtonsPageBase(e3::Element* pParent = nullptr);

 
protected:
	MDIconButton* mBack = nullptr;


};

#endif // __ButtonsPageBase_H__

