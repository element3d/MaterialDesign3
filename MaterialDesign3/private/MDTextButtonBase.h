
#ifndef __MDTextButtonBase_H__
#define __MDTextButtonBase_H__

#include <e3/ViewFactory.h>
#include "MDTheme.h"
#include <MDIcon.h>
#include <MDText.h>
#include "MDInkWell.h"


class MDTextButtonBase : public MDInkWell
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDTextButtonBase(e3::Element* pParent = nullptr);

 
protected:
	MDIcon* mIcon = nullptr;
MDText* mLabel = nullptr;
e3::Element* mHover = nullptr;


};

#endif // __MDTextButtonBase_H__

