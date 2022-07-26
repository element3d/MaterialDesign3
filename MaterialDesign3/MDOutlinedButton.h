
#ifndef MDOutlinedButton_H_
#define MDOutlinedButton_H_

#include "private/MDOutlinedButtonBase.h"
#include "MDIcon.h"
#include "MDTheme.h"

class E3_EXPORT MDOutlinedButton : public MDOutlinedButtonBase
{
public:
	MDOutlinedButton(e3::Element* pParent = nullptr);

	void SetIcon(const std::string& name);
	void SetLabel(const std::string& label, bool translate = false);

	virtual void OnMouseEnter(e3::MouseEvent* pEvent) override;
	virtual void OnMouseLeave(e3::MouseEvent* pEvent) override;

	virtual void Render() override;
};

#endif // MDOutlinedButton_H_

