#include "MDMenuItemBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDMenuItemBase::MDMenuItemBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetOverflow((e3::EOverflow)0);
        this->SetWidth("100%");
        this->SetHeight(e3::Dim("50", "50", "120", "50", "50", "50"));
    mHover = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mHover);
        mHover->SetHeight("100%");
        mHover->SetScaling((e3::EScaling)2);
        mHover->SetPositionType((e3::EPositionType)1);

}
