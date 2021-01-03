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

#ifndef _LV_BUTTON_CPP_H_
#define _LV_BUTTON_CPP_H_
#include "LVBase.h"

class LVButton : public LVBase
{
    public:
        explicit LVButton(const LVBase* parent);
        virtual ~LVButton();
        void setState(lv_btn_state_t state);
        lv_btn_state_t getState();
        void setFit(lv_fit_t fit);
        void setFit(lv_fit_t fit_h, lv_fit_t fit_v);
        void setCheckable(bool en);

        static const char* getStateName(lv_btn_state_t state);

    protected:
        lv_obj_t* _label;
};

#endif // _LV_BUTTON_CPP_H_
