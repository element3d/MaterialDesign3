#include "DrawerPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

DrawerPageBase::DrawerPageBase(e3::Element* pParent)
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
        mBack->SetColor(MDTheme::Get()->OnSurface);
        mBack->SetName(_s(arrow_back));
        mScaffold = new MDScaffold();
        AddElement(mScaffold);
        mScaffold->SetMarginTop(e3::Dim("0", "0", "0", "50", "50", "50"));
        mScaffold->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        mScaffold->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        mScaffold->SetOrientation((e3::EOrientation)1);
        mScaffold->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
                MDAppBar* pCustomView1 = new MDAppBar();
        mScaffold->AddElement(pCustomView1);
        pCustomView1->SetAlignItemsHor((e3::EAlignment)0);
        mDrawerButton = new MDAppBarAction();
        pCustomView1->AddElement(mDrawerButton);
        mDrawerButton->SetName(_s(menu));
                MDAppBarTitle* pCustomView2 = new MDAppBarTitle();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetText("Drawer");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mScaffold->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetScaling((e3::EScaling)1);
        mDrawer = new MDDrawer();
        mScaffold->AddElement(mDrawer);
        mDrawer->SetScaffold(mScaffold);
                MDElement* pCustomView3 = new MDElement();
        mDrawer->AddElement(pCustomView3);
        pCustomView3->SetWidth(e3::Dim("80%", "80%", "80%", "60%", "60%", "60%"));
        pCustomView3->SetHeight("100%");
        pCustomView3->SetOverflow((e3::EOverflow)0);
        pCustomView3->SetAlignItemsVer((e3::EAlignment)0);
        pCustomView3->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView3->AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetHeight("30%");
        pElement3->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
                MDDrawerMenuBody* pCustomView4 = new MDDrawerMenuBody();
        pCustomView3->AddElement(pCustomView4);
        mItem1 = new MDDrawerMenuItem();
        pCustomView4->AddElement(mItem1);
        mItem1->SetIcon("search");
        mItem1->SetTitle(_s(Search));
        mItem2 = new MDDrawerMenuItem();
        pCustomView4->AddElement(mItem2);
        mItem2->SetIcon("3d_rotation");
        mItem2->SetTitle(_s(3D));
                MDDrawerMenuItem* pCustomView5 = new MDDrawerMenuItem();
        pCustomView4->AddElement(pCustomView5);
        pCustomView5->SetIcon("double_arrow");
        pCustomView5->SetTitle(_s(Accelerator));
                MDDrawerMenuItem* pCustomView6 = new MDDrawerMenuItem();
        pCustomView4->AddElement(pCustomView6);
        pCustomView6->SetIcon("dashboard");
        pCustomView6->SetTitle(_s(Dashboard));
                MDDivider* pCustomView7 = new MDDivider();
        pCustomView4->AddElement(pCustomView7);
                MDDrawerMenuLabel* pCustomView8 = new MDDrawerMenuLabel();
        pCustomView4->AddElement(pCustomView8);
        pCustomView8->SetText("Labels");
                MDDrawerMenuItem* pCustomView9 = new MDDrawerMenuItem();
        pCustomView4->AddElement(pCustomView9);
        pCustomView9->SetIcon("logout");
        pCustomView9->SetTitle(_s(Logout));

}
