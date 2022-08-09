#include "MDLargeFABBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDLargeFABBase::MDLargeFABBase(e3::Element* pParent)
	: MDFAB(pParent)
{
        this->SetWidth("96dp");
        this->SetBorderRadius(glm::vec4(e3::Dim("28dp")));

}
