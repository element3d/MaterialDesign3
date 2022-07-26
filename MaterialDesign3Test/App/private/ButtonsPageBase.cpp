#include "ButtonsPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

ButtonsPageBase::ButtonsPageBase(e3::Element* pParent)
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
        mBack->SetColor(MDTheme::Get()->OnBackground);
                MDScaffold* pCustomView1 = new MDScaffold();
        AddElement(pCustomView1);
        pCustomView1->SetMarginTop(e3::Dim("0", "0", "0", "50", "50", "50"));
        pCustomView1->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        pCustomView1->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        pCustomView1->SetPaddingBottom("40dp");
        pCustomView1->SetOverflow((e3::EOverflow)2);
        pCustomView1->SetOrientation((e3::EOrientation)1);
                MDAppBar* pCustomView2 = new MDAppBar();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetAlignItemsHor((e3::EAlignment)0);
                MDAppBarTitle* pCustomView3 = new MDAppBarTitle();
        pCustomView2->AddElement(pCustomView3);
        pCustomView3->SetText("Buttons");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
                MDText* pCustomView4 = new MDText();
        pElement2->AddElement(pCustomView4);
        pCustomView4->SetText("MDIconButton");
        pCustomView4->SetFontSize("18dp");
        pCustomView4->SetFontStyle((e3::EFontStyle)2);
        pCustomView4->SetTextColor(MDTheme::Get()->OnSurface);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement3);
        pElement3->SetMarginTop("10dp");
                MDIconButton* pCustomView5 = new MDIconButton();
        pElement3->AddElement(pCustomView5);
        pCustomView5->SetName(_s(menu));
        pCustomView5->SetColor(MDTheme::Get()->PrimaryColor);
                MDText* pCustomView6 = new MDText();
        pElement2->AddElement(pCustomView6);
        pCustomView6->SetMarginTop("40dp");
        pCustomView6->SetText("MDTextButton");
        pCustomView6->SetFontSize("18dp");
        pCustomView6->SetFontStyle((e3::EFontStyle)2);
        pCustomView6->SetTextColor(MDTheme::Get()->OnSurface);
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement4);
        pElement4->SetMarginTop("10dp");
                MDTextButton* pCustomView7 = new MDTextButton();
        pElement4->AddElement(pCustomView7);
        pCustomView7->SetLabel(_s(Button));
        pCustomView7->SetIcon(_s(check));
                MDTextButton* pCustomView8 = new MDTextButton();
        pElement4->AddElement(pCustomView8);
        pCustomView8->SetMarginLeft("20dp");
        pCustomView8->SetLabel(_s(Button));
                MDText* pCustomView9 = new MDText();
        pElement2->AddElement(pCustomView9);
        pCustomView9->SetMarginTop("40dp");
        pCustomView9->SetText("MDOutlinedButton");
        pCustomView9->SetFontSize("18dp");
        pCustomView9->SetFontStyle((e3::EFontStyle)2);
        pCustomView9->SetTextColor(MDTheme::Get()->OnSurface);
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement5);
        pElement5->SetMarginTop("10dp");
                MDOutlinedButton* pCustomView10 = new MDOutlinedButton();
        pElement5->AddElement(pCustomView10);
        pCustomView10->SetLabel(_s(Button));
        pCustomView10->SetIcon(_s(check));
                MDOutlinedButton* pCustomView11 = new MDOutlinedButton();
        pElement5->AddElement(pCustomView11);
        pCustomView11->SetMarginLeft("20dp");
        pCustomView11->SetLabel(_s(Button));
                MDText* pCustomView12 = new MDText();
        pElement2->AddElement(pCustomView12);
        pCustomView12->SetMarginTop("40dp");
        pCustomView12->SetText("MDElevatedButton");
        pCustomView12->SetFontSize("18dp");
        pCustomView12->SetFontStyle((e3::EFontStyle)2);
        pCustomView12->SetTextColor(MDTheme::Get()->OnSurface);
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement6);
        pElement6->SetMarginTop("10dp");
                MDElevatedButton* pCustomView13 = new MDElevatedButton();
        pElement6->AddElement(pCustomView13);
        pCustomView13->SetIcon(_s(check));
        pCustomView13->SetLabel(_s(Button));
                MDElevatedButton* pCustomView14 = new MDElevatedButton();
        pElement6->AddElement(pCustomView14);
        pCustomView14->SetMarginLeft("20dp");
        pCustomView14->SetLabel(_s(Button));
                MDText* pCustomView15 = new MDText();
        pElement2->AddElement(pCustomView15);
        pCustomView15->SetMarginTop("40dp");
        pCustomView15->SetText("MDFilledButton");
        pCustomView15->SetFontSize("18dp");
        pCustomView15->SetFontStyle((e3::EFontStyle)2);
        pCustomView15->SetTextColor(MDTheme::Get()->OnSurface);
    e3::Element* pElement7 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement7);
        pElement7->SetMarginTop("10dp");
                MDFilledButton* pCustomView16 = new MDFilledButton();
        pElement7->AddElement(pCustomView16);
        pCustomView16->SetIcon(_s(check));
        pCustomView16->SetLabel(_s(Button));
                MDFilledButton* pCustomView17 = new MDFilledButton();
        pElement7->AddElement(pCustomView17);
        pCustomView17->SetMarginLeft("20dp");
        pCustomView17->SetLabel(_s(Button));
                MDText* pCustomView18 = new MDText();
        pElement2->AddElement(pCustomView18);
        pCustomView18->SetMarginTop("40dp");
        pCustomView18->SetText("MDFloatingActionButton");
        pCustomView18->SetFontSize("18dp");
        pCustomView18->SetFontStyle((e3::EFontStyle)2);
        pCustomView18->SetTextColor(MDTheme::Get()->OnSurface);
    e3::Element* pElement8 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement8);
        pElement8->SetMarginTop("10dp");
                MDFAB* pCustomView19 = new MDFAB();
        pElement8->AddElement(pCustomView19);
        pCustomView19->SetIcon(_s(check));
        pCustomView19->SetColor(EMDFABColor::Surf);
                MDLargeFAB* pCustomView20 = new MDLargeFAB();
        pElement8->AddElement(pCustomView20);
        pCustomView20->SetMarginLeft("20dp");
        pCustomView20->SetColor(EMDFABColor::Tert);
        pCustomView20->SetIcon(_s(check));
                MDSmallFAB* pCustomView21 = new MDSmallFAB();
        pElement8->AddElement(pCustomView21);
        pCustomView21->SetMarginLeft("20dp");
        pCustomView21->SetIcon(_s(check));
                MDText* pCustomView22 = new MDText();
        pElement2->AddElement(pCustomView22);
        pCustomView22->SetMarginTop("40dp");
        pCustomView22->SetText("MDFloatingActionButtonExtended");
        pCustomView22->SetFontSize("18dp");
        pCustomView22->SetFontStyle((e3::EFontStyle)2);
        pCustomView22->SetTextColor(MDTheme::Get()->OnSurface);
    e3::Element* pElement9 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement9);
        pElement9->SetMarginTop("10dp");
                MDFloatingActionButtonExtended* pCustomView23 = new MDFloatingActionButtonExtended();
        pElement9->AddElement(pCustomView23);
        pCustomView23->SetMarginLeft("20dp");
        pCustomView23->SetIcon(_s(check));
        pCustomView23->SetColor(EMDFABColor::Surf);
        pCustomView23->SetLabel(_s(Extended FAB));
                MDFloatingActionButtonExtended* pCustomView24 = new MDFloatingActionButtonExtended();
        pElement9->AddElement(pCustomView24);
        pCustomView24->SetMarginLeft("20dp");
        pCustomView24->SetColor(EMDFABColor::Tert);
        pCustomView24->SetLabel(_s(Extended FAB));

}
