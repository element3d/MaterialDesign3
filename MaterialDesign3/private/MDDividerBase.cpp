#include "MDDividerBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDDividerBase::MDDividerBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("1dp");
        this->SetMarginTop("8dp");
        this->SetMarginBottom("8dp");
        this->SetBackgroundColor(MDTheme::Get()->Outline);

}
