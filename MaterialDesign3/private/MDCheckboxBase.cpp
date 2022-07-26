#include "MDCheckboxBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDCheckboxBase::MDCheckboxBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("24dp");
        this->SetAspectRatio(1.000000);
        this->SetBorderSize("2dp");
        this->SetBorderRadius(glm::vec4(0.000000, 0.000000, 0.000000, 0.000000));
        this->SetMargin("8dp");
    mRipple = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mRipple);
        mRipple->SetPositionType((e3::EPositionType)1);
        mRipple->SetAspectRatio(1.000000);
        mRipple->SetHeight("40dp");
        mRipple->SetShapeType((e3::EShapeType)1);
        mIcon = new MDIcon();
        AddElement(mIcon);
        mIcon->SetName(_s(done));
        mIcon->SetColor(MDTheme::Get()->OnPrimary);
        mIcon->SetWidth("18dp");
        mIcon->SetOpacity(0.000000);
        mIcon->SetAspectRatio(1.000000);

}
