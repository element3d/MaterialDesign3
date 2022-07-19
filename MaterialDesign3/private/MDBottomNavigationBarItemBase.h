
#ifndef __MDBottomNavigationBarItemBase_H__
#define __MDBottomNavigationBarItemBase_H__

#include <e3/ViewFactory.h>
#include <MDElement.h>
#include <MDIcon.h>
#include <MDText.h>


class MDBottomNavigationBarItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MDBottomNavigationBarItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mContainer = nullptr;
MDElement* mRipple = nullptr;
MDIcon* mIcon = nullptr;
MDText* mTitle = nullptr;


};

#endif // __MDBottomNavigationBarItemBase_H__

