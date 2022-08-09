#include "MDFilledButton.h"

MDFilledButton::MDFilledButton(e3::Element* pParent)
	: MDFilledButtonBase(pParent)
{

}

void MDFilledButton::SetIcon(const std::string& name)
{
	mIcon->SetVisibility(e3::EVisibility::Visible);
	mIcon->SetName(name);
	SetPaddingLeft("16dp");
}

void MDFilledButton::SetLabel(const std::string& label, bool translate)
{
    mLabel->SetText(label, translate);
}