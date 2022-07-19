#include "MDTabBarViewBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDTabBarViewBase::MDTabBarViewBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOverflow((e3::EOverflow)0);
        this->SetAlignItemsHor((e3::EAlignment)0);

}
