
#ifndef MDFloatingActionButtonExtended_H_
#define MDFloatingActionButtonExtended_H_

#include "private/MDFloatingActionButtonExtendedBase.h"
#include "MDTheme.h"
#include "MDIcon.h"
#include "MDText.h"
#include "MDEnum.h"

class E3_EXPORT MDFloatingActionButtonExtended : public MDFloatingActionButtonExtendedBase
{
public:
	MDFloatingActionButtonExtended(e3::Element* pParent = nullptr);

	void SetIcon(const std::string& iconName);
	void SetLabel(const std::string& label, bool translate = false);
	void SetColor(EMDFABColor color);

	virtual void OnMouseEnter(e3::MouseEvent* pEvent) override;
	virtual void OnMouseLeave(e3::MouseEvent* pEvent) override;

	virtual void Render() override;

};

#endif // MDFloatingActionButtonExtended_H_

