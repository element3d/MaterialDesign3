
#ifndef __MDSwitchBase_H__
#define __MDSwitchBase_H__

#include <e3/ViewFactory.h>
#include "MDElement.h"


class MDSwitchBase : public MDElement
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDSwitchBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mCircle = nullptr;
e3::Element* mRipple = nullptr;


};

#endif // __MDSwitchBase_H__

