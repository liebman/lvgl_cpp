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

#include "LVGauge.h"

LVGauge::LVGauge(const LVBase* parent)
: LVBase()
{
    setObj(lv_gauge_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVGauge::~LVGauge()
{
}

void LVGauge::setNeedleCount(uint8_t count, const lv_color_t colors[])
{
    lv_gauge_set_needle_count(getObj(), count, colors);
}

void LVGauge::setValue(uint8_t needle, int32_t value)
{
    lv_gauge_set_value(getObj(), needle, value);
}

void LVGauge::setRange(int32_t range_min, int32_t range_max)
{
    lv_gauge_set_range(getObj(), range_min, range_max);
}

void LVGauge::setCriticalValue(int32_t value)
{
    lv_gauge_set_critical_value(getObj(), value);
}

void LVGauge::setScale( int16_t angle, uint8_t line_cnt, uint8_t label_cnt)
{
    lv_gauge_set_scale(getObj(), angle, line_cnt, label_cnt);
}

void LVGauge::setAngleOffset(uint16_t angle)
{
    lv_gauge_set_angle_offset(getObj(), angle);
}

void LVGauge::setFormatterCB(lv_gauge_format_cb_t cb)
{
    lv_gauge_set_formatter_cb(getObj(), cb);
}

int32_t LVGauge::getValue(uint8_t needle)
{
    return lv_gauge_get_value(getObj(), needle);
}

uint8_t LVGauge::getNeedleCount()
{
    return lv_gauge_get_needle_count(getObj());
}

int32_t LVGauge::getMinValue()
{
    return lv_gauge_get_min_value(getObj());
}

int32_t LVGauge::getMaxValue()
{
    return lv_gauge_get_max_value(getObj());
}

int32_t LVGauge::getCriticalValue()
{
    return lv_gauge_get_critical_value(getObj());
}

uint8_t LVGauge::getLabelCount()
{
    return lv_gauge_get_label_count(getObj());
}

uint16_t LVGauge::getLineCount()
{
    return lv_gauge_get_line_count(getObj());
}

uint16_t LVGauge::getScaleAngle()
{
    return lv_gauge_get_scale_angle(getObj());
}

uint16_t LVGauge::getAngleOffset()
{
    return lv_gauge_get_angle_offset(getObj());
}
