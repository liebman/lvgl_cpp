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

#ifndef _LV_SPINBOX_H_
#define _LV_SPINBOX_H_
#include "LVBase.h"

class LVSpinBox : public LVBase
{
    public:
        explicit LVSpinBox(const LVBase* parent);
        virtual ~LVSpinBox();
        void setRollover(bool en);
        void setValue(int32_t value);
        void setDigitFormat(uint8_t digit_count, uint8_t seperator_position);
        void setStep(uint32_t step);
        void setRange(int32_t range_min, int32_t range_max);
        void setPaddingLeft(uint8_t padding);
        bool getRollover();
        int32_t getValue();
        void stepNext();
        void stepPrev();
        void increment();
        void decrement();
};
#endif // _LV_SPINBOX_H_
