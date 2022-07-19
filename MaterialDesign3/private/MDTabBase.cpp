#include "MDTabBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDTabBase::MDTabBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetOverflow((e3::EOverflow)0);
        this->SetHeight("60dp");
        mTopIcon = new MDIcon();
        AddElement(mTopIcon);
        mTopIcon->SetMargin(0);
        mTopIcon->SetMarginBottom("10dp");
        mTopIcon->SetVisibility((e3::EVisibility)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetOrientation((e3::EOrientation)1);
        mLabel = new MDText();
        pElement1->AddElement(mLabel);
        mLabel->SetTextColor(glm::vec4(0, 0, 0, 255));
        mLabel->SetFontSize("14dp");
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
