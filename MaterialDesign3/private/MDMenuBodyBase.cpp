#include "MDMenuBodyBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDMenuBodyBase::MDMenuBodyBase(e3::Element* pParent)
	: e3::DropdownBody(pParent)
{
        this->SetMinWidth("180dp");
        this->SetPaddingTop("10dp");
        this->SetPaddingBottom("10dp");
        this->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
        this->SetBorderRadius(e3::Dim("4dp"));
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)0);
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100.000000, 100.000000, 100.000000, 255.000000);
        ShadowParams.BlurSize = e3::Dim("4dp");
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 4);
        SetShadow(ShadowParams);

}
