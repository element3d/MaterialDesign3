#include "SlidersPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

SlidersPageBase::SlidersPageBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetOverflow((e3::EOverflow)2);
        this->SetAlignItemsHor((e3::EAlignment)2);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetPaddingBottom(e3::Dim("0", "0", "0", "50", "50", "50"));
        this->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight(e3::Dim("0", "0", "0", "40", "40", "40"));
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        mBack = new MDIconButton();
        pElement1->AddElement(mBack);
        mBack->SetName(_s(arrow_back));
                MDScaffold* pCustomView1 = new MDScaffold();
        AddElement(pCustomView1);
        pCustomView1->SetMarginTop(e3::Dim("0", "0", "0", "20", "20", "20"));
        pCustomView1->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        pCustomView1->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        pCustomView1->SetOrientation((e3::EOrientation)1);
                MDAppBar* pCustomView2 = new MDAppBar();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetAlignItemsHor((e3::EAlignment)0);
                MDAppBarTitle* pCustomView3 = new MDAppBarTitle();
        pCustomView2->AddElement(pCustomView3);
        pCustomView3->SetText("Sliders");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetScaling((e3::EScaling)1);
        mInput = new MDInput();
        pElement2->AddElement(mInput);
        mInput->SetWidth(e3::Dim("300", "300", "300", "100", "100", "100"));
        mSlider = new MDSlider();
        pElement2->AddElement(mSlider);
        mSlider->SetMarginTop(e3::Dim("90", "90", "90", "30", "30", "30"));
        mDivSlider = new MDSlider();
        pElement2->AddElement(mDivSlider);
        mDivSlider->SetDivisions(5);
        mDivSlider->SetMarginTop(e3::Dim("90", "90", "90", "30", "30", "30"));

}
