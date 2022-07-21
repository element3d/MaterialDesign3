#include "MDTextButtonBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDTextButtonBase::MDTextButtonBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetHeight(e3::Dim("35", "55", "100", "40", "40", "40"));
        this->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        this->SetOverflow((e3::EOverflow)0);
    mIconCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mIconCont);
        mLabel = new MDText();
        AddElement(mLabel);
        mLabel->SetFontStyle((e3::EFontStyle)2);
        mLabel->SetMarginRight("12dp");
        mLabel->SetMarginLeft("12dp");
        mLabel->SetFontSize("16dp");
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
