#include "MDAppBarTitle.h"

MDAppBarTitle::MDAppBarTitle(e3::Element* pParent)
	: MDAppBarTitleBase(pParent)
{
	SetTextColor(MDTheme::Get()->OnSurface);
}
