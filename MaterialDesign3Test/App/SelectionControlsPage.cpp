#include "SelectionControlsPage.h"
#include <e3/Application.h>

SelectionControlsPage::SelectionControlsPage(e3::Element* pParent)
	: SelectionControlsPageBase(pParent)
{
	mBack->SetOnClickCallback([this](e3::MouseEvent*) {
		GetApplication()->PopElement();
	});

	mCheckbox1->SetOnChangeCallback([this](bool checked) {
		if (checked) mCheckTest1->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
		else mCheckTest1->SetBackgroundColor(MDTheme::Get()->OnSurface);
	});
	mCheckbox2->SetOnChangeCallback([this](bool checked) {
		if (checked) mCheckTest2->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
		else mCheckTest2->SetBackgroundColor(MDTheme::Get()->OnSurface);
	});
	mCheckbox3->SetOnChangeCallback([this](bool checked) {
		if (checked) mCheckTest3->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
		else mCheckTest3->SetBackgroundColor(MDTheme::Get()->OnSurface);
	});

	mRadio1->SetOnChangeCallback([this](bool checked) {
		if (checked) mRadioTest1->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
		else mRadioTest1->SetBackgroundColor(MDTheme::Get()->OnSurface);
	});
	mRadio2->SetOnChangeCallback([this](bool checked) {
		if (checked) mRadioTest2->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
		else mRadioTest2->SetBackgroundColor(MDTheme::Get()->OnSurface);
	});
	mRadio3->SetOnChangeCallback([this](bool checked) {
		if (checked) mRadioTest3->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
		else mRadioTest3->SetBackgroundColor(MDTheme::Get()->OnSurface);
	});

	mSwitch->SetOnChangeCallback([this](bool checked) {
		if (checked) mSwitchTest1->SetBackgroundColor(MDTheme::Get()->PrimaryColor);
		else mSwitchTest1->SetBackgroundColor(MDTheme::Get()->OnSurface);
	});
}
