#include "MDDividerBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDDividerBase::MDDividerBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("1dp");
        this->SetBackgroundColor(MDTheme::Get()->Outline);

}
