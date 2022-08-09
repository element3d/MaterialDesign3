#include "MDDrawerMenuItemBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDDrawerMenuItemBase::MDDrawerMenuItemBase(e3::Element* pParent)
	: MDInkWell(pParent)
{
        this->SetOverflow((e3::EOverflow)0);
        this->SetWidth("100%");
        this->SetHeight(e3::Dim("50", "50", "120", "50", "50", "50"));
        this->SetBorderRadius(glm::vec4(0.5));
        mTile = new MDListTile();
        AddElement(mTile);

}
