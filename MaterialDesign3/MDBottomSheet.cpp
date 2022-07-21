#include "MDBottomSheet.h"

MDBottomSheet::MDBottomSheet(e3::Element* pParent)
	: MDBottomSheetBase(pParent)
{
	mSheet->SetOnMouseMoveCallback([this](e3::MouseEvent* pEvent){
		pEvent->Stop();
		e3::Rect2f geo = mSheet->GetGeometry();
		float d = geo.y + pEvent->GetDistanceY();
		float tr = pEvent->GetDistanceY();
		if (geo.y + tr < 0) tr = -geo.y;
		if (geo.y + tr > 0.75 * geo.height)  tr = 0.75 * geo.height - geo.y;
		mSheet->Translate(glm::vec3(0, tr, 0));
	});

	mSheet->SetOnMouseUpCallback([this](e3::MouseEvent*){
		e3::Rect2f geo = mSheet->GetGeometry();
		float start = geo.y;
		float end = 0;
		if (geo.y < 0.75 * geo.height && geo.y > 0.4 * geo.height)
		{
			if (geo.y < 0.75 * geo.height && geo.y >= 0.6 * geo.height)
			{
				end = 0.75 * geo.height;
			}
			else
			{
				end = 0.45 * geo.height;
			}
		}
		else if (geo.y > 0 && geo.y < 0.4 * geo.height)
		{
			if (geo.y > 0 && geo.y <= 0.2 * geo.height)
			{

			}
			else
			{
				end = 0.4 * geo.height;
			}
		}
		else
		{
			return;
		}
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.2, start, end, e3::EAnimation::EaseInOutQuart, [this](float v){
			mSheet->SetTranslation(glm::vec3(0, v, 0));
		}, [](){

		});
	});
}

bool MDBottomSheet::IsShown()
{
	return mIsShown;
}

void MDBottomSheet::AddElement(e3::Element* pElement)
{
	mContent = (MDElement*)pElement;
	//mContent->SetWidth("100%");
//	mContent->SetBorderRadius(glm::vec4(e3::Dim("30dp"), e3::Dim("30dp"), 0, 0));
//    mContent->SetBackgroundColor(MDTheme::Get()->SurfaceVariant);
	/*mContent->*/mSheet->AddElement(pElement);
}


void MDBottomSheet::Show()
{
	Show(false);
}

void MDBottomSheet::ShowModal()
{
	SetVisibility(e3::EVisibility::Visible);
	SetWidth("100%");
	Show(true);
}

void MDBottomSheet::Hide()
{
	if (mAnimation) return;

	mIsShown = false;
	e3::Rect2f contentGeo = mContent->GetGeometry();
	//mSheet->SetTranslation(glm::vec3(0, 0, 0));
	float alpha = GetBackgroundColor().w;
	mAnimation = new e3::Animation();
	e3::Rect2f geo = mSheet->GetGeometry();

	float d = geo.height - geo.y;
	mAnimation->Start(0.25, geo.y, geo.height, [this, d, geo, alpha](float v) {
		e3::Rect2f contentGeo = mSheet->GetGeometry();
		mSheet->SetTranslation(glm::vec3(0, v, 0));
		SetBackgroundColor(glm::vec4(0, 0, 0, (1 - (v - geo.y) / d) * alpha));
	}, [this]() {
		mAnimation = nullptr;
		SetVisibility(e3::EVisibility::Gone);
	});
}

bool MDBottomSheet::OnClick(e3::MouseEvent* pEvent)
{
	glm::vec2 pos(pEvent->GetX(), pEvent->GetY());
	e3::Rect2f contentGeo = mSheet->GetGeometry();
	if (contentGeo.contains(pos))
	{
		mSheet->OnClick(pEvent);
		pEvent->Stop();
		return true;
	}

	Hide();
	pEvent->Stop();
	return true;
}

void MDBottomSheet::Show(bool showModal)
{
	if (mAnimation || !mContent) return;

	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
	mIsShown = true;
	SetVisibility(e3::EVisibility::Visible);
	e3::Rect2f contentGeo = mSheet->GetGeometry();
	mSheet->SetTranslation(glm::vec3(0, contentGeo.height, 0));
	mAnimation = new e3::Animation();
	mAnimation->Start(0.25, [this, showModal](float v) {
		e3::Rect2f contentGeo = mSheet->GetGeometry();
		mSheet->SetTranslation(glm::vec3(0, (1 - v) * contentGeo.height + contentGeo.height * 0.75, 0));
		if (showModal)
		{
			SetBackgroundColor(glm::vec4(0, 0, 0, 150 * v));
		}
	}, [this]() {
		mAnimation = nullptr;
	});
}
