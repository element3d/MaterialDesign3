#include "MDTheme.h"

std::vector<MDTheme::OnChangeCallback*> MDTheme::sOnChangeCallbacks;

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
    BackgroundColor = glm::vec4(MDColors::Primary::Get());
    SelectedItemColor = glm::vec4(glm::vec4(0, 0, 0, 255));
    UnselectedItemColor = glm::vec4(glm::vec4(0, 0, 0, 0.76 * 255));
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
    sCurrentTheme->PrimaryColor = pTheme->PrimaryColor;
    sCurrentTheme->OnPrimary = pTheme->OnPrimary;
    sCurrentTheme->OnBackground = pTheme->OnBackground;
    sCurrentTheme->Background = pTheme->Background;
    sCurrentTheme->OnSurface = pTheme->OnSurface;
    sCurrentTheme->Surface = pTheme->Surface;
    sCurrentTheme->ScaffoldBackgroundColor = pTheme->ScaffoldBackgroundColor;
//	*sCurrentTheme->AppBarTheme.BackgroundColor = *pTheme->AppBarTheme.BackgroundColor;
//	*sCurrentTheme->AppBarTheme.TextColor = *pTheme->AppBarTheme.TextColor;
//	*sCurrentTheme->AppBarTheme.IconColor = *pTheme->AppBarTheme.IconColor;
//	*sCurrentTheme->DialogTheme.BackgroundColor = *pTheme->DialogTheme.BackgroundColor;
    sCurrentTheme->BottomNavigationBarTheme.BackgroundColor = pTheme->BottomNavigationBarTheme.BackgroundColor;
    sCurrentTheme->BottomNavigationBarTheme.SelectedItemColor = pTheme->BottomNavigationBarTheme.SelectedItemColor;
    sCurrentTheme->BottomNavigationBarTheme.UnselectedItemColor = pTheme->BottomNavigationBarTheme.UnselectedItemColor;
	// sCurrentTheme = pTheme;
}

void MDTheme::AddOnChangeCallback(OnChangeCallback* onChangeCallback)
{
    sOnChangeCallbacks.push_back(onChangeCallback);
}

void MDTheme::SetDark()
{
    sCurrentTheme->PrimaryColor = glm::vec4(208, 188, 255, 255);
    sCurrentTheme->OnPrimary =  glm::vec4(56, 30, 114, 255);
    sCurrentTheme->OnBackground = sDefaultTheme->OnBackground;
    sCurrentTheme->Background = sDefaultTheme->Background;
    sCurrentTheme->OnSurface = glm::vec4(230, 225, 229, 255);
    sCurrentTheme->Surface = glm::vec4(28, 27, 31, 255);
    sCurrentTheme->ScaffoldBackgroundColor = sCurrentTheme->Surface;
    sCurrentTheme->Outline = glm::vec4(147, 143, 153, 255);

    sCurrentTheme->SurfaceVariant = glm::vec4(73, 69, 79, 255);
    sCurrentTheme->OnSurfaceVariant = glm::vec4(202, 196, 208, 255);

    sCurrentTheme->PrimaryContainer = glm::vec4(79, 55, 139, 255);
    sCurrentTheme->OnPrimaryContainer = glm::vec4(234, 221, 255, 255);

    sCurrentTheme->SecondaryContainer = glm::vec4(74, 68, 88, 255);
    sCurrentTheme->OnSecondaryContainer = glm::vec4(232, 222, 248, 255);

    sCurrentTheme->BottomNavigationBarTheme.BackgroundColor = sCurrentTheme->Surface;
    sCurrentTheme->BottomNavigationBarTheme.SelectedItemColor = sCurrentTheme->OnSecondaryContainer;
    sCurrentTheme->BottomNavigationBarTheme.UnselectedItemColor = sCurrentTheme->OnSurfaceVariant;

    for (auto c : sOnChangeCallbacks)
    {
        if (c->GetSubscribed()) c->Call();
    }
}

void MDTheme::SetDefault()
{
    sCurrentTheme->PrimaryColor = sDefaultTheme->PrimaryColor;
    sCurrentTheme->OnPrimary = sDefaultTheme->OnPrimary;
    sCurrentTheme->OnBackground = sDefaultTheme->OnBackground;
    sCurrentTheme->Background = sDefaultTheme->Background;
    sCurrentTheme->OnSurface = sDefaultTheme->OnSurface;
    sCurrentTheme->Surface = sDefaultTheme->Surface;
    sCurrentTheme->ScaffoldBackgroundColor = sDefaultTheme->ScaffoldBackgroundColor;
    sCurrentTheme->SurfaceVariant = sDefaultTheme->SurfaceVariant;
    sCurrentTheme->PrimaryContainer = sDefaultTheme->PrimaryContainer;
    sCurrentTheme->OnPrimaryContainer = sDefaultTheme->OnPrimaryContainer;
//	*sCurrentTheme->AppBarTheme.BackgroundColor = *sDefaultTheme->AppBarTheme.BackgroundColor;
//	*sCurrentTheme->AppBarTheme.TextColor = *sDefaultTheme->AppBarTheme.TextColor;
//	*sCurrentTheme->AppBarTheme.IconColor = *sDefaultTheme->AppBarTheme.IconColor;
//	*sCurrentTheme->DialogTheme.BackgroundColor = *sDefaultTheme->DialogTheme.BackgroundColor;
    sCurrentTheme->BottomNavigationBarTheme.BackgroundColor = sDefaultTheme->BottomNavigationBarTheme.BackgroundColor;
    sCurrentTheme->BottomNavigationBarTheme.SelectedItemColor = sDefaultTheme->BottomNavigationBarTheme.SelectedItemColor;
    sCurrentTheme->BottomNavigationBarTheme.UnselectedItemColor = sDefaultTheme->BottomNavigationBarTheme.UnselectedItemColor;
    for (auto c : sOnChangeCallbacks)
    {
        if (c->GetSubscribed()) c->Call();
    }
}

MDTheme::MDTheme()
{
    PrimaryColor = glm::vec4(103, 80, 164, 255);
    OnPrimary = glm::vec4(255);

    PrimaryContainer = glm::vec4(234, 221, 255, 255);
    OnPrimaryContainer = glm::vec4(33, 0, 93, 255);
    SecondaryContainer = glm::vec4(232, 222, 248, 255);
    OnSecondaryContainer = glm::vec4(29, 25, 43, 255);

    ScaffoldBackgroundColor = glm::vec4(glm::vec4(255));
    Background = glm::vec4(255, 251, 254, 255);
    OnBackground = glm::vec4(0, 0, 0, 255);
    Surface = glm::vec4(255, 251, 254, 255);
    OnSurface = glm::vec4(0, 0, 0, 255);
    SurfaceVariant = glm::vec4(231, 224, 236, 255);
    OnSurfaceVariant = glm::vec4(73, 69, 79, 255);

    Outline = glm::vec4(121, 116, 126, 255);
}
