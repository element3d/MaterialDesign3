#include "MDScaffoldBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDScaffoldBase::MDScaffoldBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);

}
