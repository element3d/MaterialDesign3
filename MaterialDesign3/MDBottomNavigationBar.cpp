#include "MDBottomNavigationBar.h"

MDBottomNavigationBar::MDBottomNavigationBar(e3::Element* pParent)
	: MDBottomNavigationBarBase(pParent)
{
//	SetBackgroundColor(MDTheme::Get()->BottomNavigationBarTheme.BackgroundColor);
	SetBackgroundColor(MDTheme::Get()->Surface);
}

void MDBottomNavigationBar::Render()
{
//	SetBackgroundColor(MDTheme::Get()->BottomNavigationBarTheme.BackgroundColor);
	MDBottomNavigationBarBase::Render();
}

void MDBottomNavigationBar::AddElement(e3::Element* pItem)
{
	MDBottomNavigationBarItem* pI = (MDBottomNavigationBarItem*)pItem;

	if (!GetNumChildren()) pI->Select();
	MDBottomNavigationBarBase::AddElement(pItem);
	pI->SetOnClickCallback([this, pI](e3::MouseEvent*) {
		for (int i = 0; i < GetNumChildren(); ++i)
		{
			MDBottomNavigationBarItem* pTmpItem = (MDBottomNavigationBarItem*)GetChildren()[i];
			if (pI != pTmpItem)
			{
				pTmpItem->Unselect();
			}
		}
	});
}