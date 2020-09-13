#include "LVBar.h"

LVBar::LVBar(const LVBase* parent)
: LVBase()
{
    setObj(lv_bar_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVBar::~LVBar()
{
}

void LVBar::setValue(int16_t value, bool animate)
{
    lv_bar_set_value(getObj(), value, animate);
}

void LVBar::setRange(int16_t range_min, int16_t range_max)
{
    lv_bar_set_range(getObj(), range_min, range_max);
}

