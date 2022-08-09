
#ifndef __MDDrawerMenuItemBase_H__
#define __MDDrawerMenuItemBase_H__

#include <e3/ViewFactory.h>
#include <MDListTile.h>
#include "MDInkWell.h"


class MDDrawerMenuItemBase : public MDInkWell
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDDrawerMenuItemBase(e3::Element* pParent = nullptr);

 
protected:
	MDListTile* mTile = nullptr;


};

#endif // __MDDrawerMenuItemBase_H__

