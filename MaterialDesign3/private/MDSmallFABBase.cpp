#include "MDSmallFABBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDSmallFABBase::MDSmallFABBase(e3::Element* pParent)
	: MDFAB(pParent)
{
        this->SetWidth("40dp");
        this->SetBorderRadius(glm::vec4(e3::Dim("12dp")));

}
