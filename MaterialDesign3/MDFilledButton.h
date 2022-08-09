
#ifndef MDFilledButton_H_
#define MDFilledButton_H_

#include "private/MDFilledButtonBase.h"

class E3_EXPORT MDFilledButton : public MDFilledButtonBase
{
public:
	MDFilledButton(e3::Element* pParent = nullptr);

	void SetIcon(const std::string& name);
	void SetLabel(const std::string& label, bool translate = false);

};

#endif // MDFilledButton_H_

