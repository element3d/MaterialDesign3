#include "MDFloatingActionButtonExtendedBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDFloatingActionButtonExtendedBase::MDFloatingActionButtonExtendedBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetHeight("56dp");
        this->SetPadding("16dp");
        this->SetMinWidth("80dp");
        this->SetBorderRadius(glm::vec4(e3::Dim("16dp")));
        this->SetOverflow((e3::EOverflow)0);
        this->SetBackgroundColor(MDTheme::Get()->PrimaryContainer);
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(60.000000, 60.000000, 60.000000, 255.000000);
        ShadowParams.BlurSize = e3::Dim("8dp");
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 8);
        SetShadow(ShadowParams);
        mIcon = new MDIcon();
        AddElement(mIcon);
        mIcon->SetVisibility((e3::EVisibility)2);
        mIcon->SetWidth("24dp");
        mIcon->SetMargin(0);
        mIcon->SetMarginRight("8dp");
        mIcon->SetAspectRatio(1.000000);
        mIcon->SetColor(MDTheme::Get()->OnPrimaryContainer);
        mLabel = new MDText();
        AddElement(mLabel);
        mLabel->SetFontStyle((e3::EFontStyle)2);
        mLabel->SetFontSize("18dp");
        mLabel->SetTextColor(MDTheme::Get()->OnPrimaryContainer);
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
