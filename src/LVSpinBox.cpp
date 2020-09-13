#include "LVSpinBox.h"

LVSpinBox::LVSpinBox(const LVBase* parent)
: LVBase()
{
    setObj(lv_spinbox_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVSpinBox::~LVSpinBox()
{
}

void LVSpinBox::setRollover(bool en)
{
    lv_spinbox_set_rollover(getObj(), en);
}

void LVSpinBox::setValue(int32_t value)
{
    lv_spinbox_set_value(getObj(), value);
}

void LVSpinBox::setDigitFormat(uint8_t digit_count, uint8_t seperator_position)
{
    lv_spinbox_set_digit_format(getObj(), digit_count, seperator_position);
}

void LVSpinBox::setStep(uint32_t step)
{
    lv_spinbox_set_step(getObj(), step);
}

void LVSpinBox::setRange(int32_t range_min, int32_t range_max)
{
    lv_spinbox_set_range(getObj(), range_min, range_max);
}

void LVSpinBox::setPaddingLeft(uint8_t padding)
{
    lv_spinbox_set_padding_left(getObj(), padding);
}

bool LVSpinBox::getRollover()
{
    return lv_spinbox_get_rollover(getObj());
}

int32_t LVSpinBox::getValue()
{
    return lv_spinbox_get_value(getObj());
}

void LVSpinBox::stepNext()
{
    lv_spinbox_step_next(getObj());
}

void LVSpinBox::stepPrev()
{
    lv_spinbox_step_prev(getObj());
}

void LVSpinBox::increment()
{
    lv_spinbox_increment(getObj());
}

void LVSpinBox::decrement()
{
    lv_spinbox_decrement(getObj());
}
