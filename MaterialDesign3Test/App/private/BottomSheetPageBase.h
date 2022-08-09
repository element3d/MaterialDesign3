
#ifndef __BottomSheetPageBase_H__
#define __BottomSheetPageBase_H__

#include <e3/ViewFactory.h>
#include <BackIcon.h>
#include <MDScaffold.h>
#include <MDAppBar.h>
#include <MDAppBarTitle.h>
#include <MDFilledButton.h>
#include <MDBottomSheet.h>
#include <MDListView.h>
#include "MDElement.h"


class BottomSheetPageBase : public MDElement
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    BottomSheetPageBase(e3::Element* pParent = nullptr);

 
protected:
	BackIcon* mBack = nullptr;
MDFilledButton* mShowButton = nullptr;
MDBottomSheet* mBottomSheet = nullptr;
MDListView* mList = nullptr;


};

#endif // __BottomSheetPageBase_H__

