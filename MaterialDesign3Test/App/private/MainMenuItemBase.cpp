#include "MainMenuItemBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

MainMenuItemBase::MainMenuItemBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetWidth("150dp");
        this->SetAspectRatio(1.000000);
        this->SetMargin("10dp");
        this->SetOrientation((e3::EOrientation)1);
        this->SetBorderRadius(e3::Dim("20dp"));
        this->SetBackgroundColor(MDTheme::Get()->Surface);
        mIcon = new MDIcon();
        AddElement(mIcon);
        mIcon->SetName(_s(web_asset));
        mIcon->SetWidth("36dp");
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(MDTheme::Get()->PrimaryColor);
        mTitle = new MDText();
        AddElement(mTitle);
        mTitle->SetText("App bar");
        mTitle->SetTextColor(MDTheme::Get()->PrimaryColor);
        mTitle->SetFontSize("14dp");
        mTitle->SetFontStyle((e3::EFontStyle)2);

}
