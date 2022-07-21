
#ifndef MDSwitch_H_
#define MDSwitch_H_

#include "private/MDSwitchBase.h"
#include "MDTheme.h"

class E3_EXPORT MDSwitch : public MDSwitchBase
{
	typedef std::function<void(bool)> OnChangeCallback;
public:
	MDSwitch(e3::Element* pParent = nullptr);

    void SetValueColor(const glm::vec4& color);
	void Check();
	void Uncheck();
	virtual void Render() override
	{
		MDSwitchBase::Render();
	}
	void SetOnChangeCallback(OnChangeCallback c);

public:
	virtual bool OnClick(e3::MouseEvent*) override;
	virtual void OnMouseEnter(e3::MouseEvent* pEvent) override;
	virtual void OnMouseLeave(e3::MouseEvent* pEvent) override;
	virtual void SetTranslation(const glm::vec3 &pos) override;

private:
	bool mChecked = false;
    glm::vec4 mValueColor;
	e3::Animation* mAnimation = nullptr;
	OnChangeCallback mOnChangeCallback;
};

#endif // MDSwitch_H_

