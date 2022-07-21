#include "MDAppBarTitleBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDAppBarTitleBase::MDAppBarTitleBase(e3::Element* pParent)
	: MDText(pParent)
{
        this->SetFontSize("18dp");
        this->SetFontStyle((e3::EFontStyle)2);
        this->SetMarginLeft("20dp");

}
