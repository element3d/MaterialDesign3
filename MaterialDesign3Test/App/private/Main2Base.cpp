#include "Main2Base.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

Main2Base::Main2Base(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        this->SetOrientation((e3::EOrientation)1);
                MDAppBar* pCustomView1 = new MDAppBar();
        AddElement(pCustomView1);
        pCustomView1->SetAlignItemsHor((e3::EAlignment)3);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement1);
                MDAppBarAction* pCustomView2 = new MDAppBarAction();
        pElement1->AddElement(pCustomView2);
        pCustomView2->SetName(_s(menu));
        pCustomView2->SetColor(glm::vec4(255));
                MDAppBarTitle* pCustomView3 = new MDAppBarTitle();
        pElement1->AddElement(pCustomView3);
        pCustomView3->SetText("App bar");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement2);
                MDAppBarAction* pCustomView4 = new MDAppBarAction();
        pElement2->AddElement(pCustomView4);
        pCustomView4->SetName(_s(menu));
        pCustomView4->SetColor(glm::vec4(255));
                MDAppBarAction* pCustomView5 = new MDAppBarAction();
        pElement2->AddElement(pCustomView5);
        pCustomView5->SetName(_s(menu));
        pCustomView5->SetColor(glm::vec4(255));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement3);
        mDrawerButton = new MDButton();
        pElement3->AddElement(mDrawerButton);
        mDrawerButton->SetLabel(_s(BUTTON));
                MDOutlinedButton* pCustomView6 = new MDOutlinedButton();
        pElement3->AddElement(pCustomView6);
        pCustomView6->SetMarginLeft(20);
        pCustomView6->SetLabel(_s(BUTTON));
                MDTextButton* pCustomView7 = new MDTextButton();
        pElement3->AddElement(pCustomView7);
        pCustomView7->SetMarginLeft(20);
        pCustomView7->SetLabel(_s(BUTTON));
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement4);
        pElement4->SetMarginTop(10);
                MDFloatingActionButton* pCustomView8 = new MDFloatingActionButton();
        pElement4->AddElement(pCustomView8);
        pCustomView8->SetIcon(new MDIcon("add", 18, glm::vec4(255)));
                MDFloatingActionButtonExtended* pCustomView9 = new MDFloatingActionButtonExtended();
        pElement4->AddElement(pCustomView9);
        pCustomView9->SetMarginLeft(20);
        pCustomView9->SetIcon(new MDIcon("add", 18, glm::vec4(255)));
        pCustomView9->SetLabel(_s(BUTTON));
                MDBottomNavigationBar* pCustomView10 = new MDBottomNavigationBar();
        AddElement(pCustomView10);
                MDBottomNavigationBarItem* pCustomView11 = new MDBottomNavigationBarItem();
        pCustomView10->AddElement(pCustomView11);
        pCustomView11->SetTitle(_s(Comments));
        pCustomView11->SetIcon(_s(comment));
                MDBottomNavigationBarItem* pCustomView12 = new MDBottomNavigationBarItem();
        pCustomView10->AddElement(pCustomView12);
        pCustomView12->SetTitle(_s(Calendar));
        pCustomView12->SetIcon(_s(calendar_today));
                MDBottomNavigationBarItem* pCustomView13 = new MDBottomNavigationBarItem();
        pCustomView10->AddElement(pCustomView13);
        pCustomView13->SetTitle(_s(Account));
        pCustomView13->SetIcon(_s(account_circle));
        mDrawer = new MDDrawer();
        AddElement(mDrawer);
                MDElement* pCustomView14 = new MDElement();
        mDrawer->AddElement(pCustomView14);
        pCustomView14->SetWidth(e3::Dim("80%", "80%", "80%", "400", "400", "400"));
        pCustomView14->SetHeight("100%");
        pCustomView14->SetOverflow((e3::EOverflow)0);
        pCustomView14->SetBackgroundColor(MDTheme::Get()->Surface);
        pCustomView14->SetAlignItemsVer((e3::EAlignment)0);
        pCustomView14->SetOrientation((e3::EOrientation)1);
        pCustomView14->SetBorderRadius(glm::vec4(0, 16, 16, 0));

}
