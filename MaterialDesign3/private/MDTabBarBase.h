
#ifndef __MDTabBarBase_H__
#define __MDTabBarBase_H__

#include <e3/ViewFactory.h>
#include <MDElement.h>


class MDTabBarBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDTabBarBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mContent = nullptr;
MDElement* mSelection = nullptr;


};

#endif // __MDTabBarBase_H__

