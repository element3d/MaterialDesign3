#include "MDTabBarBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDTabBarBase::MDTabBarBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)0);
        this->SetOverflow((e3::EOverflow)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetOrientation((e3::EOrientation)1);
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetWidth("100%");
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(mContent);
        mContent->SetOverflow((e3::EOverflow)2);
        mContent->SetOrientation((e3::EOrientation)0);
        mContent->SetWidth("100%");
        mContent->SetScaling((e3::EScaling)1);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetLeft(0);
        pElement2->SetBottom(0);
        pElement2->SetAlignItemsHor((e3::EAlignment)0);
        pElement2->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
        mSelection = new MDElement();
        pElement2->AddElement(mSelection);
        mSelection->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
        mSelection->SetWidth("100%");
        mSelection->SetHeight("2dp");

}
