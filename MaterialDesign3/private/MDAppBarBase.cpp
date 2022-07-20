#include "MDAppBarBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDAppBarBase::MDAppBarBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("60dp");
        this->SetOverflow((e3::EOverflow)0);

}
