#include "MDSwitchBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDSwitchBase::MDSwitchBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("52dp");
        this->SetHeight("32dp");
        this->SetBorderSize("2dp");
        this->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
    mCircle = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mCircle);
        mCircle->SetPositionType((e3::EPositionType)1);
        mCircle->SetLeft(0);
        mCircle->SetAspectRatio(1.000000);
        mCircle->SetHeight("24dp");
        mCircle->SetBorderRadius(glm::vec4(0.500000, 0.500000, 0.500000, 0.500000));
    mRipple = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCircle->AddElement(mRipple);
        mRipple->SetPositionType((e3::EPositionType)1);
        mRipple->SetAspectRatio(1.000000);
        mRipple->SetHeight(40);
        mRipple->SetShapeType((e3::EShapeType)1);

}
