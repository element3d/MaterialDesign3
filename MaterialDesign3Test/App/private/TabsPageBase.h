
#ifndef __TabsPageBase_H__
#define __TabsPageBase_H__

#include <e3/ViewFactory.h>
#include <MDIconButton.h>
#include <MDAppBar.h>
#include <MDAppBarTitle.h>
#include <MDTabBar.h>
#include <MDTab.h>
#include <MDTabBarView.h>
#include "MDElement.h"


class TabsPageBase : public MDElement
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TabsPageBase(e3::Element* pParent = nullptr);

 
protected:
	MDIconButton* mBack = nullptr;
MDTabBar* mTabBar = nullptr;
MDTabBarView* mTabBarView = nullptr;


};

#endif // __TabsPageBase_H__

