#include "MDTab.h"

MDTab::MDTab(e3::Element *pParent)
		: MDTabBase(pParent)
{
}

void MDTab::SetTextLabel(const std::string &textLabel)
{
	mLabel->SetText(textLabel);
	/*MDTheme* pTheme = GetTheme();
	if (!pTheme) return;
	mLabel->SetTextColor(pTheme->TextColor);*/
}

void MDTab::SetLeadingIcon(const std::string &leadingIcon)
{
	e3::Dim mIconDim = e3::Dim("20dp");
	mTopIcon->SetWidth(mIconDim);
	mTopIcon->SetHeight(mIconDim);
	//	mLeadingIcon->SetMarginRight(e3::Dim(10, 10, 20, 10, 10, 10));
	mTopIcon->SetName(leadingIcon);

	/*MDTheme* pTheme = GetTheme();
	if (!pTheme) return;
	mLeadingIcon->SetColor(pTheme->IconTheme.Color);*/
}

void MDTab::Select()
{
	/*MDTheme* pTheme = GetTheme();
	if (!pTheme) return;*/
	mTopIcon->SetColor(MDTheme::Get()->PrimaryColor);
	//	if (mTopIcon) mTopIcon->SetColor(/*pTheme->TextColor*/glm::vec4(255));
	//	if (mLeadingIcon) mLeadingIcon->SetColor(/*pTheme->TextColor*/glm::vec4(255));
	if (mLabel) mLabel->SetTextColor(/*pTheme->TextColor*/MDTheme::Get()->PrimaryColor);
}

void MDTab::Unselect()
{
	/*MDTheme* pTheme = GetTheme();
	if (!pTheme) return;*/

	//glm::vec4 c = pTheme->TextColor;
	glm::vec4 c = glm::vec4(255);
	c.w = 150;
	mTopIcon->SetColor(MDTheme::Get()->OnBackground);
	//	if (mTopIcon) mTopIcon->SetColor(c);
	//if (mLeadingIcon) mLeadingIcon->SetColor(c);
	if (mLabel) mLabel->SetTextColor(MDTheme::Get()->OnBackground);
}

void MDTab::OnMouseEnter(e3::MouseEvent *pEvent)
{
	MDTabBase::OnMouseEnter(pEvent);
	mHover->SetWidth(GetGeometry().width);
	mHover->SetHeight(GetGeometry().height);
	mHover->SetBackgroundColor(glm::vec4(255, 255, 255, 25));
}

void MDTab::OnMouseLeave(e3::MouseEvent *pEvent)
{
	MDTabBase::OnMouseLeave(pEvent);
	mHover->SetBackgroundColor(glm::vec4(255, 255, 255, 0));
}

void MDTab::Render()
{
	//	SetBackgroundColor(MDTheme::Get()->PrimaryColor);
	MDTabBase::Render();
}