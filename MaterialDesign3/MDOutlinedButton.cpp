#include "MDOutlinedButton.h"

MDOutlinedButton::MDOutlinedButton(e3::Element *pParent)
		: MDOutlinedButtonBase(pParent)
{
    //mLabel->SetTextColor(MDTheme::Get()->PrimaryColor);
	//SetBorderColor(MDTheme::Get()->OnSurface);
}

void MDOutlinedButton::SetIcon(const std::string& name)
{
	mIcon->SetVisibility(e3::EVisibility::Visible);
	mIcon->SetName(name);
	SetPaddingLeft("16dp");
}

void MDOutlinedButton::SetLabel(const std::string& label, bool translate)
{
	mLabel->SetText(label, translate);
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
