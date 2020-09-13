#include "LVLED.h"

LVLED::LVLED(const LVBase* parent)
: LVBase()
{
    setObj(lv_led_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVLED::~LVLED()
{
}

void LVLED::set(bool on)
{
    if (on)
    {
        lv_led_on(getObj());
    }
    else
    {
        lv_led_off(getObj());
    }
}
