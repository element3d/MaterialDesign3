#include "MDFilledButtonBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDFilledButtonBase::MDFilledButtonBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetHeight("40dp");
        this->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        this->SetOverflow((e3::EOverflow)0);
        this->SetPaddingLeft("24dp");
        this->SetPaddingRight("24dp");
        this->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
        mIcon = new MDIcon();
        AddElement(mIcon);
        mIcon->SetMargin(0);
        mIcon->SetMarginRight("8dp");
        mIcon->SetVisibility((e3::EVisibility)2);
        mIcon->SetWidth("18dp");
        mIcon->SetColor(MDTheme::Get()->OnPrimary);
        mIcon->SetAspectRatio(1.000000);
        mLabel = new MDText();
        AddElement(mLabel);
        mLabel->SetFontStyle((e3::EFontStyle)2);
        mLabel->SetFontSize("18dp");
        mLabel->SetTextColor(MDTheme::Get()->OnPrimary);

}
