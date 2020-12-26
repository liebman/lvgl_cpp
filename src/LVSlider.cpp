/*
 * MIT License
 *
 * Copyright (c) 2020 Christopher B. Liebman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

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
