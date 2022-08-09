#include "MDDrawerMenuItem.h"

MDDrawerMenuItem::MDDrawerMenuItem(e3::Element* pParent)
	: MDDrawerMenuItemBase(pParent)
{

}

void MDDrawerMenuItem::SetIcon(const std::string& name)
{
	mTile->SetLeading(name);
}

void MDDrawerMenuItem::SetTitle(const std::string& title, bool translate)
{
	mTile->SetTitle(title, translate);
}
