#include "MDDialogBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDDialogBase::MDDialogBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 150));
        this->SetPositionType((e3::EPositionType)1);
        this->SetStopEvents(1);
        mBody = new MDElement();
        AddElement(mBody);
        mBody->SetOverflow((e3::EOverflow)0);
        mBody->SetOrientation((e3::EOrientation)1);
        mBody->SetBorderRadius(glm::vec4(e3::Dim("28dp")));
        mBody->SetPadding("16dp");

}
