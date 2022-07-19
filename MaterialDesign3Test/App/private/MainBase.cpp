#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3TestValues.h"

MainBase::MainBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
        this->SetOrientation((e3::EOrientation)1);
        this->SetOverflow((e3::EOverflow)2);
        this->SetAlignItemsHor((e3::EAlignment)2);
                MDRow* pCustomView1 = new MDRow();
        AddElement(pCustomView1);
        mAppBarPage = new MainMenuItem();
        pCustomView1->AddElement(mAppBarPage);
        mButtonPage = new MainMenuItem();
        pCustomView1->AddElement(mButtonPage);
        mButtonPage->SetIcon(_s(crop_7_5));
        mButtonPage->SetTitle(_s(Кнопки));
                MDRow* pCustomView2 = new MDRow();
        AddElement(pCustomView2);
        mBottomNavBarPage = new MainMenuItem();
        pCustomView2->AddElement(mBottomNavBarPage);
        mBottomNavBarPage->SetIcon(_s(video_label));
        mBottomNavBarPage->SetTitle(_s(Bottom navbar));
        mDrawerPage = new MainMenuItem();
        pCustomView2->AddElement(mDrawerPage);
        mDrawerPage->SetIcon(_s(menu));
        mDrawerPage->SetTitle(_s(Drawer));
                MDRow* pCustomView3 = new MDRow();
        AddElement(pCustomView3);
        mBottomSheetPage = new MainMenuItem();
        pCustomView3->AddElement(mBottomSheetPage);
        mBottomSheetPage->SetIcon(_s(video_label));
        mBottomSheetPage->SetTitle(_s(Bottom sheet));
        mNavRailPage = new MainMenuItem();
        pCustomView3->AddElement(mNavRailPage);
        mNavRailPage->SetIcon(_s(video_label));
        mNavRailPage->SetTitle(_s(Navigation rail));
                MDRow* pCustomView4 = new MDRow();
        AddElement(pCustomView4);
        mDialogPage = new MainMenuItem();
        pCustomView4->AddElement(mDialogPage);
        mDialogPage->SetIcon(_s(crop_square));
        mDialogPage->SetTitle(_s(Dialog));
        mMenuPage = new MainMenuItem();
        pCustomView4->AddElement(mMenuPage);
        mMenuPage->SetIcon(_s(more_vert));
        mMenuPage->SetTitle(_s(Menu));
                MDRow* pCustomView5 = new MDRow();
        AddElement(pCustomView5);
        mProgressIndicatorsPage = new MainMenuItem();
        pCustomView5->AddElement(mProgressIndicatorsPage);
        mProgressIndicatorsPage->SetIcon(_s(refresh));
        mProgressIndicatorsPage->SetTitle(_s(Progress indicators));
        mSelectionControlsPage = new MainMenuItem();
        pCustomView5->AddElement(mSelectionControlsPage);
        mSelectionControlsPage->SetIcon(_s(check_box));
        mSelectionControlsPage->SetTitle(_s(Selection controls));
                MDRow* pCustomView6 = new MDRow();
        AddElement(pCustomView6);
        mSlidersPage = new MainMenuItem();
        pCustomView6->AddElement(mSlidersPage);
        mSlidersPage->SetIcon(_s(linear_scale));
        mSlidersPage->SetTitle(_s(Sliders));
        mTabsPage = new MainMenuItem();
        pCustomView6->AddElement(mTabsPage);
        mTabsPage->SetIcon(_s(tab));
        mTabsPage->SetTitle(_s(Tabs));
                MDRow* pCustomView7 = new MDRow();
        AddElement(pCustomView7);
        mTextFieldsPage = new MainMenuItem();
        pCustomView7->AddElement(mTextFieldsPage);
        mTextFieldsPage->SetIcon(_s(input));
        mTextFieldsPage->SetTitle(_s(Text fields));
        mListPage = new MainMenuItem();
        pCustomView7->AddElement(mListPage);
        mListPage->SetIcon(_s(list));
        mListPage->SetTitle(_s(List));
                MDRow* pCustomView8 = new MDRow();
        AddElement(pCustomView8);
        mSnackbarPage = new MainMenuItem();
        pCustomView8->AddElement(mSnackbarPage);
        mSnackbarPage->SetIcon(_s(input));
        mSnackbarPage->SetTitle(_s(Snackbar));

}
