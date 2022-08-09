#include "BottomSheetPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

BottomSheetPageBase::BottomSheetPageBase(e3::Element* pParent)
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
        mBack = new BackIcon();
        pElement1->AddElement(mBack);
                MDScaffold* pCustomView1 = new MDScaffold();
        AddElement(pCustomView1);
        pCustomView1->SetMarginTop(e3::Dim("0", "0", "0", "50", "50", "50"));
        pCustomView1->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        pCustomView1->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        pCustomView1->SetOrientation((e3::EOrientation)1);
                MDAppBar* pCustomView2 = new MDAppBar();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetAlignItemsHor((e3::EAlignment)3);
                MDAppBarTitle* pCustomView3 = new MDAppBarTitle();
        pCustomView2->AddElement(pCustomView3);
        pCustomView3->SetText("Bottom sheet");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetScaling((e3::EScaling)1);
        mShowButton = new MDFilledButton();
        pElement2->AddElement(mShowButton);
        mShowButton->SetLabel(_s(Show Bottom Sheet));
        mBottomSheet = new MDBottomSheet();
        pCustomView1->AddElement(mBottomSheet);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBottomSheet->AddElement(pElement3);
        pElement3->SetHeight("300dp");
        pElement3->SetAlignItemsVer((e3::EAlignment)0);
        pElement3->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement3->AddElement(pElement4);
        pElement4->SetWidth("100%");
        pElement4->SetHeight("70dp");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pElement4->AddElement(pText1);
        pText1->SetText("Header");
        pText1->SetFontSize("18dp");
        pText1->SetTextColor(MDTheme::Get()->OnSurfaceVariant);
        mList = new MDListView();
        pElement3->AddElement(mList);

}
