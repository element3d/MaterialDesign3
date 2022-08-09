
#ifndef __MDFloatingActionButtonExtendedBase_H__
#define __MDFloatingActionButtonExtendedBase_H__

#include <e3/ViewFactory.h>
#include "MDTheme.h"
#include <MDIcon.h>
#include <MDText.h>
#include "MDInkWell.h"


class MDFloatingActionButtonExtendedBase : public MDInkWell
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDFloatingActionButtonExtendedBase(e3::Element* pParent = nullptr);

 
protected:
	MDIcon* mIcon = nullptr;
MDText* mLabel = nullptr;
e3::Element* mHover = nullptr;


};

#endif // __MDFloatingActionButtonExtendedBase_H__

