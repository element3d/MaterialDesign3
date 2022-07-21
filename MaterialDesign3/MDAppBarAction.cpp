#include "MDAppBarAction.h"

MDAppBarAction::MDAppBarAction(e3::Element* pParent)
	: MDAppBarActionBase(pParent)
{
    mOnThemeChangeCallback = new MDTheme::OnChangeCallback([this](){
        SetColor(MDTheme::Get()->OnSurface);
    });
    MDTheme::AddOnChangeCallback(mOnThemeChangeCallback);
	SetColor(MDTheme::Get()->OnSurface);
}

MDAppBarAction::~MDAppBarAction()
{
    mOnThemeChangeCallback->Unsubscribe();
}
