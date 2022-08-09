#include "MDFloatingActionButtonExtended.h"

MDFloatingActionButtonExtended::MDFloatingActionButtonExtended(e3::Element *pParent)
		: MDFloatingActionButtonExtendedBase(pParent)
{
	SetBackgroundColor(MDTheme::Get()->PrimaryContainer);
}

void MDFloatingActionButtonExtended::SetIcon(const std::string &iconName)
{
	mIcon->SetName(iconName);
	mIcon->SetVisibility(e3::EVisibility::Visible);
}

void MDFloatingActionButtonExtended::SetLabel(const std::string &label, bool translate)
{
	mLabel->SetText(label, translate);
}

void MDFloatingActionButtonExtended::SetColor(EMDFABColor color)
{
	switch (color) {
		case EMDFABColor::Surface:
			SetBackgroundColor(MDTheme::Get()->Surface);
			mIcon->SetColor(MDTheme::Get()->PrimaryColor);
			mLabel->SetTextColor(MDTheme::Get()->PrimaryColor);

			return;
		case EMDFABColor::Secondary:
			SetBackgroundColor(MDTheme::Get()->SecondaryContainer);
			mIcon->SetColor(MDTheme::Get()->OnSecondaryContainer);
			mLabel->SetTextColor(MDTheme::Get()->OnSecondaryContainer);

			return;
		case EMDFABColor::Tertiary:
			SetBackgroundColor(MDTheme::Get()->TertiaryContainer);
			mIcon->SetColor(MDTheme::Get()->OnTertiaryContainer);
			mLabel->SetTextColor(MDTheme::Get()->OnTertiaryContainer);
			return;
	}
}

void MDFloatingActionButtonExtended::OnMouseEnter(e3::MouseEvent *pEvent)
{
	MDFloatingActionButtonExtendedBase::OnMouseEnter(pEvent);
	mHover->SetWidth(GetGeometry().width);
	mHover->SetHeight(GetGeometry().height);
	mHover->SetBackgroundColor(glm::vec4(255, 255, 255, 25));
}

void MDFloatingActionButtonExtended::OnMouseLeave(e3::MouseEvent *pEvent)
{
	MDFloatingActionButtonExtendedBase::OnMouseLeave(pEvent);
	mHover->SetBackgroundColor(glm::vec4(255, 255, 255, 0));
}

void MDFloatingActionButtonExtended::Render()
{
	// SetBackgroundColor(MDTheme::Get()->PrimaryColor);
	MDFloatingActionButtonExtendedBase::Render();
}
