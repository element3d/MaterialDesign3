#include "AppBarPage.h"
#include <e3/Application.h>
#include "MDPopTransitionAnimation.h"
AppBarPage::AppBarPage(e3::Element *pParent)
		: AppBarPageBase(pParent)
{
    mOnThemeChangeCallback = new MDTheme::OnChangeCallback([this](){
        mScaffold->SetBackgroundColor(MDTheme::Get()->Surface);
    });
    MDTheme::AddOnChangeCallback(mOnThemeChangeCallback);
    mScaffold->SetBackgroundColor(MDTheme::Get()->Surface);

	mBack->SetOnClickCallback([this](e3::MouseEvent *) {
		GetApplication()->PopElement(new MDPopTransitionAnimation(this));
	});
}

AppBarPage::~AppBarPage()
{
    mOnThemeChangeCallback->Unsubscribe();
}
