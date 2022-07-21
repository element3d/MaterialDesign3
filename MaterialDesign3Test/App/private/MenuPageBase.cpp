#include "MenuPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

MenuPageBase::MenuPageBase(e3::Element* pParent)
	: MDElement(pParent)
{
    mContextMenuBody = new MDMenuBody();
                MDMenuItem* pCustomView1 = new MDMenuItem();
        mContextMenuBody->AddElement(pCustomView1);
                MDListTile* pCustomView2 = new MDListTile();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetTitle(_s(menu 1));
                MDMenuItem* pCustomView3 = new MDMenuItem();
        mContextMenuBody->AddElement(pCustomView3);
        pCustomView3->SetEnabled(false);
                MDListTile* pCustomView4 = new MDListTile();
        pCustomView3->AddElement(pCustomView4);
        pCustomView4->SetTitle(_s(menu 2));
    mMenuBody1 = new MDMenuBody();
                MDMenuItem* pCustomView5 = new MDMenuItem();
        mMenuBody1->AddElement(pCustomView5);
                MDListTile* pCustomView6 = new MDListTile();
        pCustomView5->AddElement(pCustomView6);
        pCustomView6->SetTitle(_s(menu 1));
                MDMenuItem* pCustomView7 = new MDMenuItem();
        mMenuBody1->AddElement(pCustomView7);
        pCustomView7->SetEnabled(false);
                MDListTile* pCustomView8 = new MDListTile();
        pCustomView7->AddElement(pCustomView8);
        pCustomView8->SetTitle(_s(menu 2));
    mContextMenu = new MDMenu();
        mContextMenu->SetBody(mContextMenuBody);
                MDIconButton* pCustomView9 = new MDIconButton();
        mContextMenu->AddElement(pCustomView9);
        pCustomView9->SetColor(MDTheme::Get()->OnSurface);
        pCustomView9->SetName(_s(more_vert));
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
                MDScaffold* pCustomView10 = new MDScaffold();
        AddElement(pCustomView10);
        pCustomView10->SetMarginTop(e3::Dim("0", "0", "0", "50", "50", "50"));
        pCustomView10->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        pCustomView10->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        pCustomView10->SetOrientation((e3::EOrientation)1);
                MDAppBar* pCustomView11 = new MDAppBar();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetAlignItemsHor((e3::EAlignment)0);
                MDAppBarTitle* pCustomView12 = new MDAppBarTitle();
        pCustomView11->AddElement(pCustomView12);
        pCustomView12->SetText("Menus");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView10->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetScaling((e3::EScaling)1);
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pElement2->AddElement(pText1);
        pText1->SetText("Context menu");
        pText1->SetFontSize("18dp");
        pText1->SetFontStyle((e3::EFontStyle)2);
        pText1->SetTextColor(MDTheme::Get()->OnSurface);
                MDListTile* pCustomView13 = new MDListTile();
        pElement2->AddElement(pCustomView13);
        pCustomView13->SetMarginTop("10dp");
        pCustomView13->SetTitle(_s(An item with a context menu));
        pCustomView13->SetTrailing(mContextMenu);
        e3::Text* pText2 = e3::ViewFactory::CreateText();
        pElement2->AddElement(pText2);
        pText2->SetMarginTop("20dp");
        pText2->SetText("Simple menu");
        pText2->SetFontSize("18dp");
        pText2->SetFontStyle((e3::EFontStyle)2);
        pText2->SetTextColor(MDTheme::Get()->OnSurface);
                MDMenu* pCustomView14 = new MDMenu();
        pElement2->AddElement(pCustomView14);
        pCustomView14->SetMarginTop("10dp");
        pCustomView14->SetBody(mMenuBody1);
                MDInkWell* pCustomView15 = new MDInkWell();
        pCustomView14->AddElement(pCustomView15);
                MDListTile* pCustomView16 = new MDListTile();
        pCustomView15->AddElement(pCustomView16);
        pCustomView16->SetTitle(_s(An item with a simple menu));

}
