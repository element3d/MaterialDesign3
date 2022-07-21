#include "MDListTile.h"
#include "MDColors.h"
#include "MDTheme.h"
#include "MDText.h"

MDListTile::MDListTile(e3::Element* pParent)
	: MDListTileBase(pParent)
{

}

void MDListTile::SetLeading(e3::Element* pElement)
{
	mLeading->AddElement(pElement);
	/*mLeading->SetWidth("24dp");
	mLeading->SetHeight("24dp");*/
	mTitleBody->SetMarginLeft(0);
}
void MDListTile::SetLeading(const std::string& iconName)
{
	MDIcon* pIcon = new MDIcon();
	pIcon->SetWidth("18dp");
	pIcon->SetAspectRatio(1);
	pIcon->SetName(iconName);
	mLeading->AddElement(pIcon);
	mTitleBody->SetMarginLeft(0);
}

void MDListTile::SetTitle(const std::string& title, bool translate)
{
	if (!mTitleBody->GetNumChildren())
	{
		/*MD*/MDText* pTitle = new /*MD*/MDText();
        pTitle->SetTextColor(MDTheme::Get()->OnSurface);
		pTitle->SetFontSize(e3::Dim("16dp"));
		pTitle->SetText(title, translate);
		mTitleBody->AddElement(pTitle);
		return;
	}
	((e3::Text*)mTitleBody->GetChildren()[0])->SetText(title, translate);
}

void MDListTile::SetSubtitle(const std::string& subtitle, bool translate)
{
	if (mTitleBody->GetNumChildren() == 1)
	{
		/*MD*/e3::Text* pTitle = new /*MD*/e3::Text();
		pTitle->SetFontSize(14);
		pTitle->SetMarginTop(4);
		pTitle->SetTextColor(MDColors::Grey::Get("600"));
		//pTitle->SetTextColor(GetTheme()->TextTheme.Subtitle1.Color);
		pTitle->SetText(subtitle, translate);
		mTitleBody->AddElement(pTitle);
		return;
	}
	if (mTitleBody->GetNumChildren() < 1) return;

	((e3::Text*)mTitleBody->GetChildren()[1])->SetText(subtitle, translate);
}

void MDListTile::SetTrailing(e3::Element* pElement)
{
	mTrailing->AddElement(pElement);
}
