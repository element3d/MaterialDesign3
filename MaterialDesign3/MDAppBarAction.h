
#ifndef MDAppBarAction_H_
#define MDAppBarAction_H_

#include "private/MDAppBarActionBase.h"

class E3_EXPORT MDAppBarAction : public MDAppBarActionBase
{
public:
	MDAppBarAction(e3::Element* pParent = nullptr);
    ~MDAppBarAction();

private:
    MDTheme::OnChangeCallback* mOnThemeChangeCallback = nullptr;
};

#endif // MDAppBarAction_H_

