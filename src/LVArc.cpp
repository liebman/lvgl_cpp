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

#include "LVArc.h"

LVArc::LVArc(const LVBase* parent)
: LVBase()
{
    setObj(lv_arc_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVArc::~LVArc()
{
}

void LVArc::setStartAngle(uint16_t value)
{
    lv_arc_set_start_angle(getObj(), value);
}

void LVArc::setEndAngle(uint16_t value)
{
    lv_arc_set_end_angle(getObj(), value);
}

void LVArc::setAngles(uint16_t start, uint16_t end)
{
    lv_arc_set_angles(getObj(), start, end);
}

void LVArc::setBGStartAngle(uint16_t value)
{
    lv_arc_set_bg_start_angle(getObj(), value);
}

void LVArc::setBGEndAngle(uint16_t value)
{
    lv_arc_set_bg_end_angle(getObj(), value);
}

void LVArc::setBGAngles(uint16_t start, uint16_t end)
{
    lv_arc_set_bg_angles(getObj(), start, end);
}

void LVArc::setRotation(uint16_t value)
{
    lv_arc_set_rotation(getObj(), value);
}

void LVArc::setType(lv_arc_type_t type)
{
    lv_arc_set_type(getObj(), type);
}

void LVArc::setValue(uint16_t value)
{
    lv_arc_set_value(getObj(), value);
}

void LVArc::setRange(uint16_t range_min, uint16_t range_max)
{
    lv_arc_set_range(getObj(), range_min, range_max);
}

void LVArc::setChangeRate(uint16_t value)
{
    lv_arc_set_chg_rate(getObj(), value);
}

void LVArc::setAdjustable(bool adjustable)
{
    lv_arc_set_adjustable(getObj(), adjustable);
}

uint16_t LVArc::getAngleStart()
{
    return lv_arc_get_angle_start(getObj());
}

uint16_t LVArc::getAngleEnd()
{
    return lv_arc_get_angle_end(getObj());
}

uint16_t LVArc::getBGAngleStart()
{
    return lv_arc_get_bg_angle_start(getObj());
}

uint16_t LVArc::getBGAngleEnd()
{
    return lv_arc_get_bg_angle_end(getObj());
}

lv_arc_type_t LVArc::getType()
{
    return lv_arc_get_type(getObj());
}

uint16_t LVArc::getValue()
{
    return lv_arc_get_value(getObj());
}

uint16_t LVArc::getMinValue()
{
    return lv_arc_get_min_value(getObj());
}

uint16_t LVArc::getMaxValue()
{
    return lv_arc_get_max_value(getObj());
}

bool LVArc::isDragged()
{
    return lv_arc_is_dragged(getObj());
}

bool LVArc::getAdjustable()
{
    return lv_arc_get_adjustable(getObj());
}
