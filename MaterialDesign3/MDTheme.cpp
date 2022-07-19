#include "MDTheme.h"

MDAppBarTheme::MDAppBarTheme() 
{
	BackgroundColor = new MDColor(MDColors::Primary::Get());
	TextColor = new MDColor(glm::vec4(255));
	IconColor = new MDColor(glm::vec4(255));
}

MDNavigationRailTheme::MDNavigationRailTheme()
{
	BackgroundColor = new MDColor(255);
	SelectedItemColor = new MDColor(MDColors::Primary::Get());
	UnselectedItemColor = new MDColor(glm::vec4(0, 0, 0, 255));
}

MDBottomNavigationBarTheme::MDBottomNavigationBarTheme() 
{
	BackgroundColor = new MDColor(MDColors::Primary::Get());
	SelectedItemColor = new MDColor(glm::vec4(0, 0, 0, 255));
	UnselectedItemColor = new MDColor(glm::vec4(0, 0, 0, 0.76 * 255));
}

MDDialogTheme::MDDialogTheme()
{
	BackgroundColor = new MDColor(glm::vec4(255));
}

MDTheme* MDTheme::sCurrentTheme = new MDTheme();
MDTheme* MDTheme::sDefaultTheme = new MDTheme();

MDTheme* MDTheme::Get() 
{
	if (!sCurrentTheme) return sDefaultTheme;
	return sCurrentTheme;
}

void MDTheme::Set(MDTheme* pTheme) 
{
	*sCurrentTheme->PrimaryColor = *pTheme->PrimaryColor;
	*sCurrentTheme->OnPrimary = *pTheme->OnPrimary;
	*sCurrentTheme->OnBackground = *pTheme->OnBackground;
	*sCurrentTheme->Background = *pTheme->Background;
	*sCurrentTheme->OnSurface = *pTheme->OnSurface;
	*sCurrentTheme->Surface = *pTheme->Surface;
	*sCurrentTheme->ScaffoldBackgroundColor = *pTheme->ScaffoldBackgroundColor;
	*sCurrentTheme->AppBarTheme.BackgroundColor = *pTheme->AppBarTheme.BackgroundColor;
	*sCurrentTheme->AppBarTheme.TextColor = *pTheme->AppBarTheme.TextColor;
	*sCurrentTheme->AppBarTheme.IconColor = *pTheme->AppBarTheme.IconColor;
	*sCurrentTheme->DialogTheme.BackgroundColor = *pTheme->DialogTheme.BackgroundColor;
	*sCurrentTheme->BottomNavigationBarTheme.BackgroundColor = *pTheme->BottomNavigationBarTheme.BackgroundColor;
	*sCurrentTheme->BottomNavigationBarTheme.SelectedItemColor = *pTheme->BottomNavigationBarTheme.SelectedItemColor;
	*sCurrentTheme->BottomNavigationBarTheme.UnselectedItemColor = *pTheme->BottomNavigationBarTheme.UnselectedItemColor;
	// sCurrentTheme = pTheme;
}

void MDTheme::SetDefault()
{
	*sCurrentTheme->PrimaryColor = *sDefaultTheme->PrimaryColor;
	*sCurrentTheme->OnPrimary = *sDefaultTheme->OnPrimary;
	*sCurrentTheme->OnBackground = *sDefaultTheme->OnBackground;
	*sCurrentTheme->Background = *sDefaultTheme->Background;
	*sCurrentTheme->OnSurface = *sDefaultTheme->OnSurface;
	*sCurrentTheme->Surface = *sDefaultTheme->Surface;
	*sCurrentTheme->ScaffoldBackgroundColor = *sDefaultTheme->ScaffoldBackgroundColor;
	*sCurrentTheme->AppBarTheme.BackgroundColor = *sDefaultTheme->AppBarTheme.BackgroundColor;
	*sCurrentTheme->AppBarTheme.TextColor = *sDefaultTheme->AppBarTheme.TextColor;
	*sCurrentTheme->AppBarTheme.IconColor = *sDefaultTheme->AppBarTheme.IconColor;
	*sCurrentTheme->DialogTheme.BackgroundColor = *sDefaultTheme->DialogTheme.BackgroundColor;
	*sCurrentTheme->BottomNavigationBarTheme.BackgroundColor = *sDefaultTheme->BottomNavigationBarTheme.BackgroundColor;
	*sCurrentTheme->BottomNavigationBarTheme.SelectedItemColor = *sDefaultTheme->BottomNavigationBarTheme.SelectedItemColor;
	*sCurrentTheme->BottomNavigationBarTheme.UnselectedItemColor = *sDefaultTheme->BottomNavigationBarTheme.UnselectedItemColor;
}

MDTheme::MDTheme()
{
	PrimaryColor = new MDColor(103, 80, 164, 255);
	OnPrimary = new MDColor(255);

	PrimaryContainer = new MDColor(234, 221, 255, 255);
	OnPrimaryContainer = new MDColor(33, 0, 93, 255);
	SecondaryContainer = new MDColor(232, 222, 248, 255);
	OnSecondaryContainer = new MDColor(29, 25, 43, 255);

	ScaffoldBackgroundColor = new MDColor(glm::vec4(255));
	Background = new MDColor(255, 251, 254, 255);
	OnBackground = new MDColor(0, 0, 0, 255);
	Surface = new MDColor(255, 251, 254, 255);
	OnSurface = new MDColor(0, 0, 0, 255);
	SurfaceVariant = new MDColor(231, 224, 236, 255);
	OnSurfaceVariant = new MDColor(73, 69, 79, 255);

	Outline = new MDColor(121, 116, 126, 255);
}