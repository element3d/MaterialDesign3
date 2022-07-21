#include "MDIconBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDIconBase::MDIconBase(e3::Element* pParent)
	: e3::FontIcon(pParent)
{
        this->SetWidth("20dp");
        this->SetAspectRatio(1.000000);
        this->SetMargin("16dp");

}
