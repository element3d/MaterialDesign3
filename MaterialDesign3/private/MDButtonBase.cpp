#include "MDButtonBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDButtonBase::MDButtonBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetHeight("40dp");
        this->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        this->SetOverflow((e3::EOverflow)0);
        this->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
    mIconCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mIconCont);
        mLabel = new MDText();
        AddElement(mLabel);
        mLabel->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mLabel->SetFontStyle((e3::EFontStyle)2);
        mLabel->SetTextColor(MDTheme::Get()->OnPrimary);
        mLabel->SetMarginRight("24dp");
        mLabel->SetMarginLeft("24dp");
        mLabel->SetFontSize("18dp");
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
