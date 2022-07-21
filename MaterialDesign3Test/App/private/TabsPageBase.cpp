#include "TabsPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

TabsPageBase::TabsPageBase(e3::Element* pParent)
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
        pCustomView3->SetText("Tabs");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetScaling((e3::EScaling)1);
        mTabBar = new MDTabBar();
        pElement2->AddElement(mTabBar);
        mTabBar->SetWidth("100%");
        mTabBar->SetIsScrollable(false);
                MDTab* pCustomView4 = new MDTab();
        mTabBar->AddElement(pCustomView4);
        pCustomView4->SetLeadingIcon(_s(favorite));
        pCustomView4->SetTextLabel(_s(Red));
                MDTab* pCustomView5 = new MDTab();
        mTabBar->AddElement(pCustomView5);
        pCustomView5->SetLeadingIcon(_s(favorite));
        pCustomView5->SetTextLabel(_s(Orange));
                MDTab* pCustomView6 = new MDTab();
        mTabBar->AddElement(pCustomView6);
        pCustomView6->SetLeadingIcon(_s(favorite));
        pCustomView6->SetTextLabel(_s(Green));
        mTabBarView = new MDTabBarView();
        pElement2->AddElement(mTabBarView);
        mTabBarView->SetTabBar(mTabBar);
        mTabBarView->SetWidth("100%");
        mTabBarView->SetHeight("100%");
        mTabBarView->SetScaling((e3::EScaling)1);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mTabBarView->AddElement(pElement3);
                MDText* pCustomView7 = new MDText();
        pElement3->AddElement(pCustomView7);
        pCustomView7->SetText("Red");
        pCustomView7->SetTextColor(MDTheme::Get()->OnSurface);
        pCustomView7->SetFontSize("30dp");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mTabBarView->AddElement(pElement4);
                MDText* pCustomView8 = new MDText();
        pElement4->AddElement(pCustomView8);
        pCustomView8->SetText("Orange");
        pCustomView8->SetTextColor(MDTheme::Get()->OnSurface);
        pCustomView8->SetFontSize("30dp");
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mTabBarView->AddElement(pElement5);
                MDText* pCustomView9 = new MDText();
        pElement5->AddElement(pCustomView9);
        pCustomView9->SetText("Green");
        pCustomView9->SetTextColor(MDTheme::Get()->OnSurface);
        pCustomView9->SetFontSize("30dp");

}
