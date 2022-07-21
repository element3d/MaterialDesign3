#include "MainMenuItem.h"

MainMenuItem::MainMenuItem(e3::Element* pParent)
		: MainMenuItemBase(pParent)
{
    MDTheme::OnChangeCallback* pC = new MDTheme::OnChangeCallback([this](){
        SetBackgroundColor(MDTheme::Get()->Surface);
        mIcon->SetColor(MDTheme::Get()->PrimaryColor);
        mTitle->SetTextColor(MDTheme::Get()->PrimaryColor);
    });
    MDTheme::AddOnChangeCallback(pC);
}

void MainMenuItem::SetIcon(const std::string& iconName)
{
	mIcon->SetName(iconName);
}

void MainMenuItem::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}
