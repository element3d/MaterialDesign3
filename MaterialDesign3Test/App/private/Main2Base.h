
#ifndef __Main2Base_H__
#define __Main2Base_H__

#include <e3/ViewFactory.h>
#include <MDAppBar.h>
#include <MDAppBarAction.h>
#include <MDAppBarTitle.h>
#include <MDFilledButton.h>
#include <MDOutlinedButton.h>
#include <MDTextButton.h>
#include <MDFloatingActionButton.h>
#include <MDFloatingActionButtonExtended.h>
#include <MDBottomNavigationBar.h>
#include <MDBottomNavigationBarItem.h>
#include <MDDrawer.h>
#include <MDElement.h>


class Main2Base : public MDElement
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    Main2Base(e3::Element* pParent = nullptr);

 
protected:
	MDFilledButton* mDrawerButton = nullptr;
MDDrawer* mDrawer = nullptr;


};

#endif // __Main2Base_H__

