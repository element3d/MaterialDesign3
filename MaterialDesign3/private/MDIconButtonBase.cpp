#include "MDIconButtonBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDIconButtonBase::MDIconButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("52dp");
        this->SetHeight("52dp");
    mBackground = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBackground);
        mBackground->SetPositionType((e3::EPositionType)1);
        mBackground->SetWidth("40dp");
        mBackground->SetAspectRatio(1.000000);
        mBackground->SetShapeType((e3::EShapeType)1);
        mBackground->SetOverflow((e3::EOverflow)0);
    mRipple = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBackground->AddElement(mRipple);
        mRipple->SetWidth("100%");
        mRipple->SetAspectRatio(1.000000);
        mRipple->SetShapeType((e3::EShapeType)1);
        mIcon = new MDIcon();
        AddElement(mIcon);
        mIcon->SetMargin(0);

}
