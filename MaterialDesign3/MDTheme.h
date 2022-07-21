#ifndef __MD_THEME__
#define __MD_THEME__

#include "MDColors.h"
#include <functional>
#include <vector>
#include <e3/Types.h>

class MDAppBarTheme 
{
public:
	MDAppBarTheme();

public:
	MDColor* BackgroundColor;
	MDColor* TextColor;
	MDColor* IconColor;
};

class MDNavigationRailTheme
{
public:
	MDNavigationRailTheme();

public:
	MDColor* BackgroundColor;
	MDColor* SelectedItemColor;
	MDColor* UnselectedItemColor;
};

class MDBottomNavigationBarTheme
{
public:
	MDBottomNavigationBarTheme();

public:
    glm::vec4 BackgroundColor;
    glm::vec4 SelectedItemColor;
    glm::vec4 UnselectedItemColor;
};

class MDDialogTheme
{
public:
	MDDialogTheme();

public:
	MDColor* BackgroundColor;
};

class E3_EXPORT MDTheme
{
public:
    typedef e3::Callback<void(void)> OnChangeCallback;

public:
	static MDTheme* Get();
	static void Set(MDTheme* pTheme);
	static void SetDefault();
    static void SetDark();
    static void AddOnChangeCallback(OnChangeCallback* onChangeCallback);

	MDTheme();

public:
    glm::vec4 PrimaryColor;
    glm::vec4 OnPrimary;
    glm::vec4 PrimaryContainer;
    glm::vec4 OnPrimaryContainer;
    glm::vec4 SecondaryContainer;
    glm::vec4 OnSecondaryContainer;
    glm::vec4 Background;
    glm::vec4 OnBackground;
    glm::vec4 Surface;
    glm::vec4 OnSurface;
    glm::vec4 SurfaceVariant;
    glm::vec4 OnSurfaceVariant;
    glm::vec4 ScaffoldBackgroundColor;
    glm::vec4 Outline;
//	MDAppBarTheme AppBarTheme;
    MDBottomNavigationBarTheme BottomNavigationBarTheme;
//	MDNavigationRailTheme NavigationRailTheme;
//	MDDialogTheme DialogTheme;
private:
	static MDTheme* sCurrentTheme;
	static MDTheme* sDefaultTheme;
    static MDTheme* sDarkTheme;
    static std::vector<OnChangeCallback*> sOnChangeCallbacks;
};

#endif // !__MD_THEME__
