#include "BackIconBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

BackIconBase::BackIconBase(e3::Element* pParent)
	: MDIconButton(pParent)
{
        this->SetName(_s(arrow_back));
        this->SetColor(MDTheme::Get()->OnSurfaceVariant);

}
