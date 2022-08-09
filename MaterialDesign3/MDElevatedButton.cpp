#include "MDElevatedButton.h"

MDElevatedButton::MDElevatedButton(e3::Element* pParent)
	: MDElevatedButtonBase(pParent)
{

}

void MDElevatedButton::SetIcon(const std::string& name)
{
	mIcon->SetVisibility(e3::EVisibility::Visible);
	mIcon->SetName(name);
	SetPaddingLeft("16dp");
}

void MDElevatedButton::SetLabel(const std::string& label, bool translate)
{
	mLabel->SetText(label, translate);
}