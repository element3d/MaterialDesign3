
#ifndef MDDrawerMenuBody_H_
#define MDDrawerMenuBody_H_

#include "private/MDDrawerMenuBodyBase.h"
#include "MDDivider.h"
#include "MDDrawerMenuItem.h"
#include "MDDrawerMenuLabel.h"

class E3_EXPORT MDDrawerMenuBody : public MDDrawerMenuBodyBase
{
public:
	MDDrawerMenuBody(e3::Element* pParent = nullptr);

	void AddElement(MDDrawerMenuItem* pItem);
	void AddElement(MDDrawerMenuLabel* pLabel);
	void AddElement(MDDivider* pDivider);
};

#endif // MDDrawerMenuBody_H_

