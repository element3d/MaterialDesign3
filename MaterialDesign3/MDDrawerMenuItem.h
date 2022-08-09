
#ifndef MDDrawerMenuItem_H_
#define MDDrawerMenuItem_H_

#include "private/MDDrawerMenuItemBase.h"

class E3_EXPORT MDDrawerMenuItem : public MDDrawerMenuItemBase
{
public:
	MDDrawerMenuItem(e3::Element* pParent = nullptr);

	void SetIcon(const std::string& name);
	void SetTitle(const std::string& title, bool translate = false);
};

#endif // MDDrawerMenuItem_H_

