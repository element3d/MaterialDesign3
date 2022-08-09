
#ifndef MDElevatedButton_H_
#define MDElevatedButton_H_

#include "private/MDElevatedButtonBase.h"

class E3_EXPORT MDElevatedButton : public MDElevatedButtonBase
{
public:
	MDElevatedButton(e3::Element* pParent = nullptr);

	void SetIcon(const std::string& name);
	void SetLabel(const std::string& label, bool translate = false);
};

#endif // MDElevatedButton_H_

