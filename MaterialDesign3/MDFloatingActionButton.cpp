#include "MDFloatingActionButton.h"

MDFloatingActionButton::MDFloatingActionButton(e3::Element *pParent)
		: MDFloatingActionButtonBase(pParent)
{
	SetBackgroundColor(MDTheme::Get()->PrimaryContainer);
}

void MDFloatingActionButton::SetIcon(e3::Element *pIcon)
{
	//pIcon->SetMarginLeft(0);
	//pIcon->SetMarginRight(8);
	pIcon->SetWidth("18dp");
	pIcon->SetHeight("18dp");
	((MDIcon *)pIcon)->SetColor(MDTheme::Get()->OnPrimaryContainer);
	AddElement(pIcon);
}

void MDFloatingActionButton::OnMouseEnter(e3::MouseEvent *pEvent)
{
	MDFloatingActionButtonBase::OnMouseEnter(pEvent);
	mHover->SetWidth(GetGeometry().width);
	mHover->SetHeight(GetGeometry().height);
	mHover->SetBackgroundColor(glm::vec4(255, 255, 255, 25));
}

void MDFloatingActionButton::OnMouseLeave(e3::MouseEvent *pEvent)
{
	MDFloatingActionButtonBase::OnMouseLeave(pEvent);
	mHover->SetBackgroundColor(glm::vec4(255, 255, 255, 0));
}

void MDFloatingActionButton::Render()
{
	//SetBackgroundColor(MDTheme::Get()->PrimaryColor);
	MDFloatingActionButtonBase::Render();
}
