#include "MDAppBar.h"

MDAppBar::MDAppBar(e3::Element* pParent)
	: MDAppBarBase(pParent)
{
    mOnThemeChangeCallback = new MDTheme::OnChangeCallback([this](){
        SetBackgroundColor(MDTheme::Get()->Surface);
    });
    MDTheme::AddOnChangeCallback(mOnThemeChangeCallback);

	SetBackgroundColor(MDTheme::Get()->Surface);
}

MDAppBar::~MDAppBar()
{
    mOnThemeChangeCallback->Unsubscribe();
}

void MDAppBar::Render()
{
	// SetBackgroundColor(MDTheme::Get()->AppBarTheme.BackgroundColor);
	MDAppBarBase::Render();
}
