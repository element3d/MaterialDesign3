#include "MDBottomNavigationBarBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDBottomNavigationBarBase::MDBottomNavigationBarBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("80dp");
        this->SetOverflow((e3::EOverflow)0);

}
