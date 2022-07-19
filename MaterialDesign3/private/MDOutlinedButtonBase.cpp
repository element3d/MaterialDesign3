#include "MDOutlinedButtonBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDOutlinedButtonBase::MDOutlinedButtonBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetHeight("40dp");
        this->SetBorderColor(MDColors::Primary::Get());
        this->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        this->SetBorderSize("2dp");
    mIconCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mIconCont);
        mLabel = e3::ViewFactory::CreateText();
        AddElement(mLabel);
        mLabel->SetFontStyle((e3::EFontStyle)2);
        mLabel->SetMarginRight("24dp");
        mLabel->SetMarginLeft("24dp");
        mLabel->SetFontSize("18dp");
        mLabel->SetTextColor(glm::vec4(96, 2, 238, 255));
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
