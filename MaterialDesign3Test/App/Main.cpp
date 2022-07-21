#include "Main.h"
#include "AppBarPage.h"
#include "ButtonsPage.h"
#include "BottomNavigationBarPage.h"
#include "BottomSheetPage.h"
#include "SelectionControlsPage.h"
#include "SlidersPage.h"
#include "TabsPage.h"
#include "DrawerPage.h"
#include "DialogPage.h"
#include "MenuPage.h"
#include <e3/Application.h>

Main::Main(e3::Element *pParent)
    : MainBase(pParent)
{
    MDTheme::OnChangeCallback* pCall = new MDTheme::OnChangeCallback([this](){
         SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
    });

    MDTheme::AddOnChangeCallback(pCall);

    mDarkModeSwitch->SetOnChangeCallback([](bool checked) {
        if (checked)
            MDTheme::SetDark();
        else
            MDTheme::SetDefault();

    });

    mAppBarPage->SetOnClickCallback([this](e3::MouseEvent *) {
        AppBarPage *pAppBarPage = new AppBarPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mButtonPage->SetOnClickCallback([this](e3::MouseEvent *) {
        ButtonsPage *pAppBarPage = new ButtonsPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mBottomNavBarPage->SetOnClickCallback([this](e3::MouseEvent *) {
        BottomNavigationBarPage *pAppBarPage = new BottomNavigationBarPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mBottomSheetPage->SetOnClickCallback([this](e3::MouseEvent *) {
        BottomSheetPage *pAppBarPage = new BottomSheetPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mSelectionControlsPage->SetOnClickCallback([this](e3::MouseEvent *) {
        SelectionControlsPage *pAppBarPage = new SelectionControlsPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mSlidersPage->SetOnClickCallback([this](e3::MouseEvent *) {
        SlidersPage *pAppBarPage = new SlidersPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mTabsPage->SetOnClickCallback([this](e3::MouseEvent *) {
        TabsPage *pAppBarPage = new TabsPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mDrawerPage->SetOnClickCallback([this](e3::MouseEvent *) {
        DrawerPage *pAppBarPage = new DrawerPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mDialogPage->SetOnClickCallback([this](e3::MouseEvent *) {
        DialogPage *pAppBarPage = new DialogPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });

    mMenuPage->SetOnClickCallback([this](e3::MouseEvent *) {
        MenuPage *pAppBarPage = new MenuPage();
        GetApplication()->PushElement(pAppBarPage, false, new MDPushTransitionAnimation(pAppBarPage));
    });
}
