#include "MDBottomSheetBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDBottomSheetBase::MDBottomSheetBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPositionType((e3::EPositionType)1);
        this->SetBottom(0);
        this->SetVisibility((e3::EVisibility)1);
        this->SetAlignItemsVer((e3::EAlignment)1);
        this->SetOverflow((e3::EOverflow)0);
    mSheet = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSheet);
        mSheet->SetWidth("100%");
        mSheet->SetHeight("100%");
        mSheet->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
        mSheet->SetBorderRadius(glm::vec4(e3::Dim("30dp"), e3::Dim("30dp"), 0, 0));
        mSheet->SetAlignItemsVer((e3::EAlignment)0);
        mSheet->SetOrientation((e3::EOrientation)1);
        mSheet->SetAlignItemsHor((e3::EAlignment)2);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mSheet->AddElement(pElement1);
        pElement1->SetWidth("30dp");
        pElement1->SetHeight("4dp");
        pElement1->SetMargin("16dp");
        pElement1->SetBackgroundColor(MDTheme::Get()->OnSurfaceVariant);

}
