#include "MDRadioBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDRadioBase::MDRadioBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("20dp");
        this->SetAspectRatio(1.000000);
        this->SetShapeType((e3::EShapeType)1);
        this->SetBorderSize("2dp");
        this->SetMargin("8dp");
        this->SetBorderColor(glm::vec4(96, 2, 238, 255));
    mRipple = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mRipple);
        mRipple->SetPositionType((e3::EPositionType)1);
        mRipple->SetAspectRatio(1.000000);
        mRipple->SetHeight("40dp");
        mRipple->SetShapeType((e3::EShapeType)1);
    mCheck = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCheck);
        mCheck->SetWidth("10dp");
        mCheck->SetAspectRatio(1.000000);
        mCheck->SetShapeType((e3::EShapeType)1);

}
