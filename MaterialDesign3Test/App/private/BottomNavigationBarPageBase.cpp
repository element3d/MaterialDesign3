#include "BottomNavigationBarPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

BottomNavigationBarPageBase::BottomNavigationBarPageBase(e3::Element* pParent)
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
        this->SetOverflow((e3::EOverflow)2);
        this->SetAlignItemsHor((e3::EAlignment)2);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetPaddingBottom(e3::Dim("0", "0", "0", "50", "50", "50"));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight(e3::Dim("0", "0", "0", "40", "40", "40"));
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        mBack = new MDIconButton();
        pElement1->AddElement(mBack);
        mBack->SetName(_s(arrow_back));
                MDScaffold* pCustomView5 = new MDScaffold();
        AddElement(pCustomView5);
        pCustomView5->SetMarginTop(e3::Dim("0", "0", "0", "50", "50", "50"));
        pCustomView5->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        pCustomView5->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        pCustomView5->SetOrientation((e3::EOrientation)1);
                MDAppBar* pCustomView6 = new MDAppBar();
        pCustomView5->AddElement(pCustomView6);
        pCustomView6->SetAlignItemsHor((e3::EAlignment)3);
                MDAppBarTitle* pCustomView7 = new MDAppBarTitle();
        pCustomView6->AddElement(pCustomView7);
        pCustomView7->SetText("Bottom navigation bar");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView5->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetScaling((e3::EScaling)1);
                MDBottomNavigationBar* pCustomView8 = new MDBottomNavigationBar();
        pCustomView5->AddElement(pCustomView8);
                MDBottomNavigationBarItem* pCustomView9 = new MDBottomNavigationBarItem();
        pCustomView8->AddElement(pCustomView9);
        pCustomView9->SetTitle(_s(Comments));
        pCustomView9->SetIcon(_s(comment));
                MDBottomNavigationBarItem* pCustomView10 = new MDBottomNavigationBarItem();
        pCustomView8->AddElement(pCustomView10);
        pCustomView10->SetTitle(_s(Calendar));
        pCustomView10->SetIcon(_s(calendar_today));
                MDBottomNavigationBarItem* pCustomView11 = new MDBottomNavigationBarItem();
        pCustomView8->AddElement(pCustomView11);
        pCustomView11->SetTitle(_s(Account));
        pCustomView11->SetIcon(_s(account_circle));

}
