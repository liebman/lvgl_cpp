#include "LVSlider.h"

LVSlider::LVSlider(const LVBase* parent)
: LVBase()
{
    setObj(lv_slider_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVSlider::~LVSlider()
{
}

void LVSlider::setValue(int16_t value, bool animate)
{
    lv_slider_set_value(getObj(), value, animate);
}

int16_t LVSlider::getValue()
{
    return lv_slider_get_value(getObj());
}

void LVSlider::setLeftValue(int16_t value, bool animate)
{
    lv_slider_set_left_value(getObj(), value, animate);
}

int16_t LVSlider::getLeftValue()
{
    return lv_slider_get_left_value(getObj());
}

void LVSlider::setRange(int16_t range_min, int16_t range_max)
{
    lv_slider_set_range(getObj(), range_min, range_max);
}

void LVSlider::setType(lv_slider_type_t type)
{
    lv_slider_set_type(getObj(), type);
}

bool LVSlider::isDragged()
{
    return lv_slider_is_dragged(getObj());
}
