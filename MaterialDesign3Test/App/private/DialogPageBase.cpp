#include "DialogPageBase.h"

#include <e3/ViewFactory.h>
#include "./MaterialDesign3TestValues.h"

DialogPageBase::DialogPageBase(e3::Element* pParent)
	: MDElement(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetOverflow((e3::EOverflow)2);
        this->SetAlignItemsHor((e3::EAlignment)2);
        this->SetAlignItemsVer((e3::EAlignment)0);
        this->SetPaddingBottom(e3::Dim("0", "0", "0", "50", "50", "50"));
        this->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight(e3::Dim("0", "0", "0", "40", "40", "40"));
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        mBack = new MDIconButton();
        pElement1->AddElement(mBack);
        mBack->SetName(_s(arrow_back));
                MDScaffold* pCustomView1 = new MDScaffold();
        AddElement(pCustomView1);
        pCustomView1->SetMarginTop(e3::Dim("0", "0", "0", "50", "50", "50"));
        pCustomView1->SetWidth(e3::Dim("100%", "100%", "100%", "500", "500", "500"));
        pCustomView1->SetHeight(e3::Dim("100%", "100%", "100%", "700", "700", "700"));
        pCustomView1->SetOrientation((e3::EOrientation)1);
                MDAppBar* pCustomView2 = new MDAppBar();
        pCustomView1->AddElement(pCustomView2);
        pCustomView2->SetAlignItemsHor((e3::EAlignment)0);
                MDAppBarTitle* pCustomView3 = new MDAppBarTitle();
        pCustomView2->AddElement(pCustomView3);
        pCustomView3->SetText("Dialog");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetOrientation((e3::EOrientation)1);
        pElement2->SetScaling((e3::EScaling)1);
        mDialogButton = new MDFilledButton();
        pElement2->AddElement(mDialogButton);
        mDialogButton->SetLabel(_s(Show dialog));
        mDialog = new MDDialog();
        pCustomView1->AddElement(mDialog);
        mDialog->SetWidth("280dp");
        mDialog->SetHeight("150dp");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mDialog->AddElement(pElement3);
        pElement3->SetHeight("100%");
        pElement3->SetWidth("100%");
        pElement3->SetScaling((e3::EScaling)1);
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mDialog->AddElement(pElement4);
        pElement4->SetWidth("100%");
        pElement4->SetAlignItemsHor((e3::EAlignment)1);
                MDTextButton* pCustomView4 = new MDTextButton();
        pElement4->AddElement(pCustomView4);
        pCustomView4->SetLabel(_s(Cancel));
                MDTextButton* pCustomView5 = new MDTextButton();
        pElement4->AddElement(pCustomView5);
        pCustomView5->SetLabel(_s(Discard));

}
