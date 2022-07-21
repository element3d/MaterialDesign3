#include "MDFloatingActionButtonExtended.h"

MDFloatingActionButtonExtended::MDFloatingActionButtonExtended(e3::Element *pParent)
		: MDFloatingActionButtonExtendedBase(pParent)
{
	SetBackgroundColor(MDTheme::Get()->PrimaryContainer);
}

void MDFloatingActionButtonExtended::SetIcon(e3::Element *pIcon)
{
	pIcon->SetMarginLeft(0);
	pIcon->SetMarginRight(0);
	pIcon->SetWidth("18dp");
	pIcon->SetAspectRatio(1);
	((MDIcon *)pIcon)->SetColor(MDTheme::Get()->OnPrimaryContainer);
	mIconCont->AddElement(pIcon);
}

void MDFloatingActionButtonExtended::SetIcon(const std::string &iconName)
{
	MDIcon *pIcon = new MDIcon();
	pIcon->SetWidth("18dp");
	pIcon->SetAspectRatio(1);
	pIcon->SetMarginLeft(0);
	pIcon->SetMarginRight(0);
	pIcon->SetName(iconName);
	((MDIcon *)pIcon)->SetColor(MDTheme::Get()->OnPrimary);
	mIconCont->AddElement(pIcon);
}

void MDFloatingActionButtonExtended::SetLabel(const std::string &label, bool translate)
{
	if (mIconCont->GetNumChildren())
	{
		mIconCont->GetChildren()[0]->SetMarginRight(e3::Dim(48, 48, 48, 18, 18, 18));
	}

	if (!mLabelCont->GetNumChildren())
	{
		MDText *pLabel = new MDText();
		pLabel->SetFontSize("16dp");
		pLabel->SetTextColor(glm::vec4(255));
		pLabel->SetFontStyle(e3::EFontStyle::Bold);
		pLabel->SetText(label, translate);
		pLabel->SetTextColor(MDTheme::Get()->OnPrimaryContainer);
		mLabelCont->AddElement(pLabel);
		return;
	}
	e3::Text *pLabel = (e3::Text *)mLabelCont->GetChildren()[0];
	pLabel->SetText(label, translate);
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
