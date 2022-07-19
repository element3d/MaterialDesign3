#include "MDOutlinedButton.h"

MDOutlinedButton::MDOutlinedButton(e3::Element *pParent)
		: MDOutlinedButtonBase(pParent)
{
	mLabel->SetTextColor(*MDTheme::Get()->PrimaryColor);
	SetBorderColor(MDTheme::Get()->PrimaryColor);
}

void MDOutlinedButton::SetLabel(const std::string &label, bool translate)
{
	//mLabel->SetVisibility(e3::EVisibility::Visible);
	mLabel->SetText(label, translate);
}

void MDOutlinedButton::SetIcon(MDIcon *pIcon)
{
	pIcon->SetMarginLeft("16dp");
	pIcon->SetMarginRight(0);
	pIcon->SetWidth("18dp");
	pIcon->SetHeight("18dp");
	pIcon->SetColor(MDTheme::Get()->PrimaryColor);
	mLabel->SetMarginLeft("8dp");
	mIconCont->AddElement(pIcon);
}

void MDOutlinedButton::OnMouseEnter(e3::MouseEvent *pEvent)
{
	MDOutlinedButtonBase::OnMouseEnter(pEvent);
	mHover->SetWidth(GetGeometry().width);
	mHover->SetHeight(GetGeometry().height);
	mHover->SetBackgroundColor(glm::vec4(glm::vec3(GetBorderColor()), 10));
}

void MDOutlinedButton::OnMouseLeave(e3::MouseEvent *pEvent)
{
	MDOutlinedButtonBase::OnMouseLeave(pEvent);
	mHover->SetBackgroundColor(glm::vec4(255, 255, 255, 0));
}

void MDOutlinedButton::Render()
{
	//SetBorderColor(MDTheme::Get()->PrimaryColor);
	/*mLabel->SetTextColor(*MDTheme::Get()->PrimaryColor);
	if (mIconCont->GetNumChildren())
	{
		MDIcon* pIcon = (MDIcon*)mIconCont->GetChildren()[0];
		pIcon->SetColor(MDTheme::Get()->PrimaryColor);
	}*/
	MDOutlinedButtonBase::Render();
}
