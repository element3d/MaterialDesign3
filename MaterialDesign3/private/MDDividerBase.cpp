#include "MDDividerBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDDividerBase::MDDividerBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("100%");
        this->SetHeight(e3::Dim("1", "1", "2", "1", "1", "1"));

}
