
#ifndef __MDOutlinedButtonBase_H__
#define __MDOutlinedButtonBase_H__

#include <e3/ViewFactory.h>
#include "MDTheme.h"
#include <MDIcon.h>
#include <MDText.h>
#include "MDInkWell.h"


class MDOutlinedButtonBase : public MDInkWell
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDOutlinedButtonBase(e3::Element* pParent = nullptr);

 
protected:
	MDIcon* mIcon = nullptr;
MDText* mLabel = nullptr;
e3::Element* mHover = nullptr;


};

#endif // __MDOutlinedButtonBase_H__

