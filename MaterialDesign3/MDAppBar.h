
#ifndef MDAppBar_H_
#define MDAppBar_H_

#include "private/MDAppBarBase.h"
#include "MDTheme.h"

class E3_EXPORT MDAppBar : public MDAppBarBase
{
public:
	MDAppBar(e3::Element* pParent = nullptr);
    ~MDAppBar();

	virtual void Render() override;

private:
    MDTheme::OnChangeCallback* mOnThemeChangeCallback = nullptr;
};

#endif // MDAppBar_H_

