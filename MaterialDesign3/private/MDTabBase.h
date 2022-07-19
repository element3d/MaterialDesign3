
#ifndef __MDTabBase_H__
#define __MDTabBase_H__

#include <e3/ViewFactory.h>
#include "MDColors.h"
#include <MDIcon.h>
#include <MDText.h>
#include "MDInkWell.h"


class MDTabBase : public MDInkWell
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDTabBase(e3::Element* pParent = nullptr);

 
protected:
	MDIcon* mTopIcon = nullptr;
MDText* mLabel = nullptr;
e3::Element* mHover = nullptr;


};

#endif // __MDTabBase_H__

