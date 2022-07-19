#include "MDAppBar.h"

MDAppBar::MDAppBar(e3::Element* pParent)
	: MDAppBarBase(pParent)
{
	SetBackgroundColor(MDTheme::Get()->Surface);
}

void MDAppBar::Render()
{
	// SetBackgroundColor(MDTheme::Get()->AppBarTheme.BackgroundColor);
	MDAppBarBase::Render();
}