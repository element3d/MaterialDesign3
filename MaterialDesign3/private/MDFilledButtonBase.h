
#ifndef __MDFilledButtonBase_H__
#define __MDFilledButtonBase_H__

#include <e3/ViewFactory.h>
#include "MDTheme.h"
#include <MDIcon.h>
#include <MDText.h>
#include "MDInkWell.h"


class MDFilledButtonBase : public MDInkWell
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDFilledButtonBase(e3::Element* pParent = nullptr);

 
protected:
	MDIcon* mIcon = nullptr;
MDText* mLabel = nullptr;


};

#endif // __MDFilledButtonBase_H__

