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

class LVArc : public LVBase
{
    public:
        explicit LVArc(const LVBase* parent);
        virtual ~LVArc();
        void setStartAngle(uint16_t value);
        void setEndAngle(uint16_t value);
        void setAngles(uint16_t start, uint16_t end);
        void setBGStartAngle(uint16_t value);
        void setBGEndAngle(uint16_t value);
        void setBGAngles(uint16_t start, uint16_t end);
        void setRotation(uint16_t value);
        void setType(lv_arc_type_t type);
        void setValue(uint16_t value);
        void setRange(uint16_t range_min, uint16_t range_max);
        void setChangeRate(uint16_t threshold);
        void setAdjustable(bool adjustable);

        uint16_t getAngleStart();
        uint16_t getAngleEnd();
        uint16_t getBGAngleStart();
        uint16_t getBGAngleEnd();
        lv_arc_type_t getType();
        uint16_t getValue();
        uint16_t getMinValue();
        uint16_t getMaxValue();
        bool isDragged();
        bool getAdjustable();
};
