#include "MDSwitch.h"
#include "MDColors.h"

MDSwitch::MDSwitch(e3::Element *pParent)
		: MDSwitchBase(pParent)
{
	//	mBack->SetBackgroundColor(MDColors::Grey::Get());
	mCircle->SetBackgroundColor(MDColors::Grey::Get("600"));
	mValueColor = MDTheme::Get()->PrimaryColor;
	SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
	SetBorderColor(MDTheme::Get()->Outline);

	mCircle->SetScale(glm::vec3(0.66, 0.66, 1), e3::ETransformAlignment::Center);
}

bool MDSwitch::OnClick(e3::MouseEvent *pEvent)
{
	if (!mChecked)
		Check();
	else
		Uncheck();

	return MDSwitchBase::OnClick(pEvent);
}

void MDSwitch::OnMouseEnter(e3::MouseEvent *pEvent)
{
	mRipple->SetBackgroundColor(glm::vec4(0, 0, 0, 10));
	return MDSwitchBase::OnMouseEnter(pEvent);
}

void MDSwitch::OnMouseLeave(e3::MouseEvent *pEvent)
{
	mRipple->SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	return MDSwitchBase::OnMouseLeave(pEvent);
}

void MDSwitch::SetTranslation(const glm::vec3 &pos)
{
	glm::vec4 tr(0, 0, 0, 1);
	tr = GetTranslation() * tr;

	glm::vec4 checktr(0, 0, 0, 1);
	checktr = mCircle->GetTranslation() * checktr;

	glm::vec4 diff = checktr - tr;
	e3::Element::SetTranslation(glm::vec3(pos));
	mCircle->SetTranslation(pos + glm::vec3(diff));
}

void MDSwitch::SetValueColor(MDColor *pColor)
{
	mValueColor = pColor;
}

void MDSwitch::Check()
{
	mChecked = true;
	if (mAnimation) return;
	mAnimation = new e3::Animation();
	MDColor* pColor = mValueColor;
	/*	const MDTheme* pTheme = mTheme ? mTheme : Material::GetTheme();
	switch (pTheme->ColorScheme)
	{
	case EMDColorScheme::Red:
	bgColor = MDColors::Red::Get("200");
	break;
	case EMDColorScheme::DeepPurple:
	{
	bgColor = MDColors::DeepPurple::Get("200");
	break;
	}
	case EMDColorScheme::Grey:
	bgColor = MDColors::Grey::Get("200");
	break;
	default:
	break;
	}*/
	if (mOnChangeCallback) mOnChangeCallback(true);

	mAnimation->Start(0.1, [this, pColor](float v) {
		e3::Rect2f geo = GetGeometry();
		mCircle->SetScale(glm::vec3(0.66 + 0.34 * v), e3::ETransformAlignment::Center);
		mCircle->SetBackgroundColor(glm::mix(*(MDTheme::Get()->Outline), glm::vec4(*pColor), v));
		mCircle->SetTranslation(glm::vec3(v * (geo.width - mCircle->GetGeometry().width - e3::Dim("6dp")), 0, 0));
		SetBackgroundColor(glm::mix(*(MDTheme::Get()->SurfaceVariant), glm::vec4(*(MDTheme::Get()->PrimaryColor)), v));
		//glm::vec4 bgColor = glm::mix(*(MDTheme::Get()->Outline), *pColor, 0.36);
		// mBack->SetBackgroundColor(glm::mix(MDColors::Grey::Get(), bgColor, v));
	}, [this]() {
		mAnimation = nullptr;
	});
}

void MDSwitch::Uncheck()
{
	mChecked = false;
	if (mAnimation) return;
	mAnimation = new e3::Animation();

	//const MDTheme* pTheme = mTheme ? mTheme : Material::GetTheme();
	MDColor* pColor = mValueColor;
	glm::vec4 bgColor = glm::mix(MDColors::Red::Get("100"), *pColor, 0.5);

	/*switch (pTheme->ColorScheme)
	{
	case EMDColorScheme::Red:
	bgColor = MDColors::Red::Get("200");
	break;
	case EMDColorScheme::DeepPurple:
	{
	bgColor = MDColors::DeepPurple::Get("200");
	break;
	}
	case EMDColorScheme::Grey:
	bgColor = MDColors::Grey::Get("200");
	break;
	default:
	break;
	}*/
	if (mOnChangeCallback) mOnChangeCallback(false);

	mAnimation->Start(0.1, [this, bgColor, pColor](float v) {
		mCircle->SetScale(glm::vec3(0.66 + 0.34 * (1 - v)), e3::ETransformAlignment::Center);
		e3::Rect2f geo = GetGeometry();
		mCircle->SetBackgroundColor(glm::mix(*(MDTheme::Get()->Outline), glm::vec4(*pColor), 1 - v));
		mCircle->SetTranslation(glm::vec3((1 - v) * (geo.width - mCircle->GetGeometry().width - e3::Dim("6dp")), 0, 0));
		SetBackgroundColor(glm::mix(*(MDTheme::Get()->SurfaceVariant), glm::vec4(*(MDTheme::Get()->PrimaryColor)), 1 - v));
	//	mBack->SetBackgroundColor(glm::mix(MDColors::Grey::Get(), bgColor, 1 - v));
	}, [this]() {
		mAnimation = nullptr;
	});
}

void MDSwitch::SetOnChangeCallback(OnChangeCallback c)
{
			mOnChangeCallback = c;
}