#include "MDFloatingActionButtonBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDFloatingActionButtonBase::MDFloatingActionButtonBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetWidth("56dp");
        this->SetHeight("56dp");
        this->SetPadding("16dp");
        this->SetBorderRadius(e3::Dim("16dp"));
        this->SetOverflow((e3::EOverflow)0);
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100, 100, 100, 250);
        ShadowParams.BlurSize = e3::Dim("4dp");
        ShadowParams.Opacity = 0.6;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 8);
        SetShadow(ShadowParams);
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
