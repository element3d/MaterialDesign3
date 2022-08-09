#include "MDTextButtonBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDTextButtonBase::MDTextButtonBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetHeight("40dp");
        this->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        this->SetOverflow((e3::EOverflow)0);
        this->SetPaddingLeft("12dp");
        this->SetPaddingRight("12dp");
        mIcon = new MDIcon();
        AddElement(mIcon);
        mIcon->SetMargin(0);
        mIcon->SetMarginRight("8dp");
        mIcon->SetVisibility((e3::EVisibility)2);
        mIcon->SetWidth("18dp");
        mIcon->SetColor(MDTheme::Get()->PrimaryColor);
        mIcon->SetAspectRatio(1.000000);
        mLabel = new MDText();
        AddElement(mLabel);
        mLabel->SetFontStyle((e3::EFontStyle)2);
        mLabel->SetFontSize("18dp");
        mLabel->SetTextColor(MDTheme::Get()->PrimaryColor);
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
