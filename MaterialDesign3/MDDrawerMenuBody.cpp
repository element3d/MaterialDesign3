#include "MDDrawerMenuBody.h"

MDDrawerMenuBody::MDDrawerMenuBody(e3::Element* pParent)
	: MDDrawerMenuBodyBase(pParent)
{

}

void MDDrawerMenuBody::AddElement(MDDrawerMenuItem* pItem)
{
	e3::Element::AddElement(pItem);
	pItem->SetOnClickCallback([this, pItem](e3::MouseEvent*){
		pItem->SetBackgroundColor(MDTheme::Get()->SecondaryContainer);

		for (int i = 0; i < GetNumChildren(); ++i)
		{
			MDDrawerMenuItem* pTmpItem = dynamic_cast<MDDrawerMenuItem*>(GetChildren()[i]);
			if (pTmpItem && pTmpItem != pItem) pTmpItem->SetBackgroundColor(glm::vec4(0));
		}
	});
}

void MDDrawerMenuBody::AddElement(MDDrawerMenuLabel* pLabel)
{
	e3::Element::AddElement(pLabel);
}

void MDDrawerMenuBody::AddElement(MDDivider* pDivider)
{
	e3::Element::AddElement(pDivider);
}