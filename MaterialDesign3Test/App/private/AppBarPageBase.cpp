#include "AppBarPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

AppBarPageBase::AppBarPageBase(e3::Element* pParent)
	: MDElement(pParent)
{
    mMenuBody = new MDMenuBody();
                MDMenuItem* pCustomView1 = new MDMenuItem();
        mMenuBody->AddElement(pCustomView1);
                MDListTile* pCustomView2 = new MDListTile();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetTitle(_s(menu 1));
                MDMenuItem* pCustomView3 = new MDMenuItem();
        mMenuBody->AddElement(pCustomView3);
        pCustomView3->SetEnabled(false);
                MDListTile* pCustomView4 = new MDListTile();
        pCustomView3->AddElement(pCustomView4);
        pCustomView4->SetTitle(_s(menu 2));
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight(e3::Dim("0", "0", "0", "40", "40", "40"));
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        mBack = new MDIconButton();
        pElement1->AddElement(mBack);
        mBack->SetColor(MDTheme::Get()->OnBackground);
        mBack->SetName(_s(arrow_back));
        mScaffold = new MDScaffold();
        AddElement(mScaffold);
        mScaffold->SetMarginTop(e3::Dim("0", "0", "0", "50", "50", "50"));
        mScaffold->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        mScaffold->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        mScaffold->SetOrientation((e3::EOrientation)1);
        mScaffold->SetBackgroundColor(MDTheme::Get()->Background);
                MDAppBar* pCustomView5 = new MDAppBar();
        mScaffold->AddElement(pCustomView5);
        pCustomView5->SetAlignItemsHor((e3::EAlignment)3);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView5->AddElement(pElement2);
                MDAppBarAction* pCustomView6 = new MDAppBarAction();
        pElement2->AddElement(pCustomView6);
        pCustomView6->SetName(_s(menu));
                MDAppBarTitle* pCustomView7 = new MDAppBarTitle();
        pElement2->AddElement(pCustomView7);
        pCustomView7->SetText("App bar");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView5->AddElement(pElement3);
                MDAppBarAction* pCustomView8 = new MDAppBarAction();
        pElement3->AddElement(pCustomView8);
        pCustomView8->SetName(_s(menu));
                MDAppBarAction* pCustomView9 = new MDAppBarAction();
        pElement3->AddElement(pCustomView9);
        pCustomView9->SetName(_s(menu));
                MDMenu* pCustomView10 = new MDMenu();
        pElement3->AddElement(pCustomView10);
        pCustomView10->SetBody(mMenuBody);
                MDAppBarAction* pCustomView11 = new MDAppBarAction();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetName(_s(more_vert));
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mScaffold->AddElement(pElement4);
        pElement4->SetWidth("100%");
        pElement4->SetHeight("100%");
        pElement4->SetOrientation((e3::EOrientation)1);
        pElement4->SetScaling((e3::EScaling)1);

}
