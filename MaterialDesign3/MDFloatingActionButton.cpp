#include "MDFloatingActionButton.h"

MDFloatingActionButton::MDFloatingActionButton(e3::Element *pParent)
		: MDFloatingActionButtonBase(pParent)
{
	SetBackgroundColor(MDTheme::Get()->PrimaryContainer);
}

void MDFloatingActionButton::SetIcon(const std::string& name)
{
	mIcon->SetName(name);
}

void MDFloatingActionButton::SetColor(EMDFABColor color)
{
	switch (color) {
		case EMDFABColor::Surface:
			SetBackgroundColor(MDTheme::Get()->Surface);
			mIcon->SetColor(MDTheme::Get()->PrimaryColor);
			return;
		case EMDFABColor::Secondary:
			SetBackgroundColor(MDTheme::Get()->SecondaryContainer);
			mIcon->SetColor(MDTheme::Get()->OnSecondaryContainer);
			return;
		case EMDFABColor::Tertiary:
			SetBackgroundColor(MDTheme::Get()->TertiaryContainer);
			mIcon->SetColor(MDTheme::Get()->OnTertiaryContainer);
			return;
	}
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
