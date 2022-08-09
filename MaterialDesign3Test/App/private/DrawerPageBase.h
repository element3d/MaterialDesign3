
#ifndef __DrawerPageBase_H__
#define __DrawerPageBase_H__

#include <e3/ViewFactory.h>
#include <MDIconButton.h>
#include <MDScaffold.h>
#include <MDAppBar.h>
#include <MDAppBarAction.h>
#include <MDAppBarTitle.h>
#include <MDDrawer.h>
#include <MDElement.h>
#include <MDDrawerMenuBody.h>
#include <MDDrawerMenuItem.h>
#include <MDDivider.h>
#include <MDDrawerMenuLabel.h>


class DrawerPageBase : public MDElement
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    DrawerPageBase(e3::Element* pParent = nullptr);

 
protected:
	MDIconButton* mBack = nullptr;
MDScaffold* mScaffold = nullptr;
MDAppBarAction* mDrawerButton = nullptr;
MDDrawer* mDrawer = nullptr;
MDDrawerMenuItem* mItem1 = nullptr;
MDDrawerMenuItem* mItem2 = nullptr;


};

#endif // __DrawerPageBase_H__

