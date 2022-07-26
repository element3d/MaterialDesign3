
#ifndef MDDrawer_H_
#define MDDrawer_H_

#include "private/MDDrawerBase.h"
#include "MDDrawerMenuItem.h"

class MDScaffold;
class E3_EXPORT MDDrawer : public MDDrawerBase
{
public:
	MDDrawer(e3::Element* pParent = nullptr);

	void Show();
	void ShowModal();
	void Hide();
	void SetScaffold(MDScaffold* pScaffold);

	bool IsShown();

	virtual void AddElement(e3::Element* pElement) override;
	void AddElement(MDDrawerMenuItem* pItem);
public:
	virtual bool OnClick(e3::MouseEvent* pEvent) override;

private:
	void Show(bool showModal);

private:
	bool mIsShown = false;
	bool mSliding = false;
	MDElement* mContent = nullptr;
	e3::Animation* mAnimation = nullptr;
	MDScaffold* mScaffold = nullptr;
};

#endif // MDDrawer_H_

