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

#pragma once
#include "LVBase.h"

class LVGauge : public LVBase
{
    public:
        explicit LVGauge(const LVBase* parent);
        virtual ~LVGauge();
        void setNeedleCount(uint8_t count, const lv_color_t colors[]);
        void setValue(uint8_t needle, int32_t value);
        void setRange(int32_t range_min, int32_t range_max);
        void setCriticalValue(int32_t value);
        void setScale( int16_t angle, uint8_t line_cnt, uint8_t label_cnt);
        void setAngleOffset(uint16_t angle);
        void setFormatterCB(lv_gauge_format_cb_t cb);

        int32_t getValue(uint8_t needle);
        uint8_t getNeedleCount();
        int32_t getMinValue();
        int32_t getMaxValue();
        int32_t getCriticalValue();
        uint8_t getLabelCount();
        uint16_t getLineCount();
        uint16_t getScaleAngle();
        uint16_t getAngleOffset();
};
