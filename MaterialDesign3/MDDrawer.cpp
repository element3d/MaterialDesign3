#include "MDDrawer.h"

MDDrawer::MDDrawer(e3::Element* pParent)
	: MDDrawerBase(pParent)
{

}

bool MDDrawer::IsShown()
{
	return mIsShown;
}

void MDDrawer::AddElement(e3::Element* pElement)
{
	mContent = (MDElement*)pElement;
	mContent->SetWidth("360dp");
	mContent->SetBorderRadius(glm::vec4(0, e3::Dim("16dp"), e3::Dim("16dp"), 0));
	mContent->SetBackgroundColor(MDTheme::Get()->Surface);
	/*mContent->*/e3::Element::AddElement(pElement);

//	mContent->SetOnMouseMoveCallback([this](e3::MouseEvent* pEvent){
//		mContent->Translate(glm::vec3(-pEvent->GetDistanceX(), 0, 0));
//	});
}


void MDDrawer::Show()
{
	Show(false);
}

void MDDrawer::ShowModal()
{
	SetVisibility(e3::EVisibility::Visible);
	SetWidth("100%");
	Show(true);
}

void MDDrawer::Hide()
{
	if (mAnimation) return;

	mIsShown = false;
	mSliding = false;
	//mContent->SetTranslation(glm::vec3(0, 0, 0));
	float alpha = GetBackgroundColor().w;
	mAnimation = new e3::Animation();
//	mAnimation->Start(0.25, e3::EAnimation::EaseOutQuad, [this, alpha](float v) {
//		e3::Rect2f contentGeo = mContent->GetGeometry();
//		mContent->SetTranslation(glm::vec3(-v * contentGeo.width, 0, 0));
//		SetBackgroundColor(glm::vec4(0, 0, 0, (1 - v) * alpha));
//	}, [this]() {
//		mAnimation = nullptr;
//		SetVisibility(e3::EVisibility::Gone);
//	});
	e3::Rect2f geo = mContent->GetGeometry();
	mAnimation->Start(0.25, geo.x, -geo.width, e3::EAnimation::EaseOutQuad, [this, alpha](float v) {
		e3::Rect2f geo = mContent->GetGeometry();
		mContent->SetTranslation(glm::vec3(v, 0, 0));
		SetBackgroundColor(glm::vec4(0, 0, 0, (geo.x + geo.width) / geo.width * 150));
	}, [this]() {
		mAnimation = nullptr;
		SetVisibility(e3::EVisibility::Gone);
	});
}

#include "MDScaffold.h"
void MDDrawer::SetScaffold(MDScaffold* pScaffold)
{
	mScaffold = pScaffold;
	mScaffold->SetOnMouseMoveCallback([this](e3::MouseEvent* pEvent){
		e3::Rect2f sgeo = mScaffold->GetGeometry();
		e3::Rect2f geo = mContent->GetGeometry();
		if (!mIsShown)
		{
			mContent->SetTranslation(glm::vec3(-mContent->GetGeometry().width, 0, 0));
			SetVisibility(e3::EVisibility::Visible);
			mIsShown = true;
		}
		if (mIsShown || mSliding || pEvent->GetX() < sgeo.x + e3::Dim("50dp"))
		{
			mSliding = true;
			SetBackgroundColor(glm::vec4(0, 0, 0, (geo.x + geo.width) / geo.width * 150));
//			SetBackgroundColor(glm::vec4(0, 0, 0, 0));
//			mIsShown = true;
			float tr = -pEvent->GetDistanceX();
			if (geo.x + tr >= 0) tr = geo.x;
			mContent->Translate(glm::vec3(tr, 0, 0));
		}
	});

	mScaffold->SetOnMouseUpCallback([this](e3::MouseEvent*){
		mIsShown = false;
		if (!mSliding) return;
		mSliding = false;
		e3::Rect2f geo = mContent->GetGeometry();
		if (geo.x + geo.width >= geo.width / 2.0f) Show();
		else Hide();
	});
}

bool MDDrawer::OnClick(e3::MouseEvent* pEvent)
{
	glm::vec2 pos(pEvent->GetX(), pEvent->GetY());
	e3::Rect2f contentGeo = mContent->GetGeometry();
	if (contentGeo.contains(pos))
	{
		mContent->OnClick(pEvent);
		pEvent->Stop();
		return true;
	}

	Hide();
	pEvent->Stop();
	return true;
}

void MDDrawer::Show(bool showModal)
{
	if (mAnimation || !mContent) return;

//	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	mIsShown = true;
	SetVisibility(e3::EVisibility::Visible);
	e3::Rect2f contentGeo = mContent->GetGeometry();
	// mContent->SetTranslation(glm::vec3(-contentGeo.width, 0, 0));
	mAnimation = new e3::Animation();
//	mAnimation->Start(0.25, e3::EAnimation::EaseOutQuad, [this, showModal](float v) {
//		e3::Rect2f contentGeo = mContent->GetGeometry();
//		mContent->SetTranslation(glm::vec3(-(1 - v) * contentGeo.width, 0, 0));
//		if (showModal)
//		{
//			SetBackgroundColor(glm::vec4(0, 0, 0, 150 * v));
//		}
//	}, [this]() {
//		mAnimation = nullptr;
//	});

	e3::Rect2f geo = mContent->GetGeometry();
	mAnimation->Start(0.25, geo.x, 0, e3::EAnimation::EaseOutQuad, [this, showModal](float v) {
		e3::Rect2f geo = mContent->GetGeometry();
		mContent->SetTranslation(glm::vec3(v, 0, 0));
		//if (showModal)
		{
			SetBackgroundColor(glm::vec4(0, 0, 0, (geo.x + geo.width) / geo.width * 150));
//			SetBackgroundColor(glm::vec4(0, 0, 0, 150 * v));
		}
	}, [this]() {
		mAnimation = nullptr;
	});
}