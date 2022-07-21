#include "MDListTileBase.h"

#include <e3/ViewFactory.h>
#include "MaterialDesign3Values.h"

MDListTileBase::MDListTileBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("50dp");
    mLeading = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mLeading);
        mLeading->SetMarginLeft("10dp");
        mLeading->SetMarginRight("10dp");
    mTitleBody = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mTitleBody);
        mTitleBody->SetWidth("100%");
        mTitleBody->SetHeight("100%");
        mTitleBody->SetScaling((e3::EScaling)1);
        mTitleBody->SetMarginLeft("20dp");
        mTitleBody->SetAlignItemsHor((e3::EAlignment)0);
        mTitleBody->SetOrientation((e3::EOrientation)1);
    mTrailing = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mTrailing);

}
