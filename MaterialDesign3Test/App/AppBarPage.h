
#ifndef AppBarPage_H_
#define AppBarPage_H_

#include "private/AppBarPageBase.h"

class E3_EXPORT AppBarPage : public AppBarPageBase
{
public:
	AppBarPage(e3::Element* pParent = nullptr);
    ~AppBarPage();
private:
    MDTheme::OnChangeCallback* mOnThemeChangeCallback = nullptr;
};

#endif // AppBarPage_H_

