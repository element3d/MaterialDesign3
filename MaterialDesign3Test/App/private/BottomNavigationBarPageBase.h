
#ifndef __BottomNavigationBarPageBase_H__
#define __BottomNavigationBarPageBase_H__

#include <e3/ViewFactory.h>
#include <MDMenuBody.h>
#include <MDMenuItem.h>
#include <MDListTile.h>
#include <MDIconButton.h>
#include <MDScaffold.h>
#include <MDAppBar.h>
#include <MDAppBarTitle.h>
#include <MDBottomNavigationBar.h>
#include <MDBottomNavigationBarItem.h>
#include "MDElement.h"


class BottomNavigationBarPageBase : public MDElement
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    BottomNavigationBarPageBase(e3::Element* pParent = nullptr);

 
protected:
	MDMenuBody* mMenuBody = nullptr;
MDIconButton* mBack = nullptr;


};

#endif // __BottomNavigationBarPageBase_H__

