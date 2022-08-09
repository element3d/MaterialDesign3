#include "MDDrawerMenuBodyBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDDrawerMenuBodyBase::MDDrawerMenuBodyBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetWidth("100%");
        this->SetPadding("16dp");

}
