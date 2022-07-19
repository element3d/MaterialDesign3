#include "MDBottomNavigationBarItemBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDBottomNavigationBarItemBase::MDBottomNavigationBarItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetScaling((e3::EScaling)1);
        this->SetShapeType((e3::EShapeType)1);
        this->SetOrientation((e3::EOrientation)1);
    mContainer = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContainer);
        mContainer->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContainer->AddElement(pElement1);
        pElement1->SetWidth("64dp");
        pElement1->SetHeight("32dp");
        mRipple = new MDElement();
        pElement1->AddElement(mRipple);
        mRipple->SetPositionType((e3::EPositionType)1);
        mRipple->SetWidth("100%");
        mRipple->SetHeight("100%");
        mRipple->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
        mIcon = new MDIcon();
        pElement1->AddElement(mIcon);
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetHeight("24dp");
        mIcon->SetMargin(0);
        mTitle = new MDText();
        mContainer->AddElement(mTitle);
        mTitle->SetMarginTop("4dp");
        mTitle->SetFontSize("14dp");

}
