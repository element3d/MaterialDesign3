#include "MDFloatingActionButtonExtendedBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDFloatingActionButtonExtendedBase::MDFloatingActionButtonExtendedBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetHeight("56dp");
        this->SetPadding("16dp");
        this->SetBorderRadius(e3::Dim("16dp"));
        this->SetOverflow((e3::EOverflow)0);
        this->SetBackgroundColor(glm::vec4(96, 2, 238, 255));
        e3::ShadowParams ShadowParams;
        ShadowParams.Color = glm::vec4(100.000000, 100.000000, 100.000000, 255.000000);
        ShadowParams.BlurSize = e3::Dim("4dp");
        ShadowParams.Opacity = 1.0;
        ShadowParams.Scale = 1.0;
        ShadowParams.Offset = glm::ivec2(0, 2);
        SetShadow(ShadowParams);
    mIconCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mIconCont);
    mLabelCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mLabelCont);
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
