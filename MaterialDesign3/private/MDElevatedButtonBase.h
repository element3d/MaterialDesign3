
#ifndef __MDElevatedButtonBase_H__
#define __MDElevatedButtonBase_H__

#include <e3/ViewFactory.h>
#include "MDTheme.h"
#include <MDIcon.h>
#include <MDText.h>
#include "MDInkWell.h"


class MDElevatedButtonBase : public MDInkWell
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDElevatedButtonBase(e3::Element* pParent = nullptr);

 
protected:
	MDIcon* mIcon = nullptr;
MDText* mLabel = nullptr;


};

#endif // __MDElevatedButtonBase_H__

