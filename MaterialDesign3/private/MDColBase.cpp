#include "MDColBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDColBase::MDColBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);

}
