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

#include "LVButton.h"

static const char* button_state_names[] = 
{
    "LV_BTN_STATE_RELEASED",
    "LV_BTN_STATE_PRESSED",
    "LV_BTN_STATE_DISABLED",
    "LV_BTN_STATE_CHECKED_RELEASED",
    "LV_BTN_STATE_CHECKED_PRESSED",
    "LV_BTN_STATE_CHECKED_DISABLED",
};

LVButton::LVButton(const LVBase* parent)
: LVBase(),
  _label(nullptr)
{
    setObj(lv_btn_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVButton::~LVButton()
{
}

void LVButton::setState(lv_btn_state_t state)
{
    lv_btn_set_state(getObj(), state);
}

lv_btn_state_t LVButton::getState()
{
    return lv_btn_get_state(getObj());
}

void LVButton::setFit(lv_fit_t fit)
{
    lv_btn_set_fit(getObj(), fit);
}

void LVButton::setCheckable(bool en)
{
    lv_btn_set_checkable(getObj(), en);
}

void LVButton::setFit(lv_fit_t fit_h, lv_fit_t fit_v)
{
    lv_btn_set_fit2(getObj(), fit_h, fit_v);
}

const char* LVButton::getStateName(lv_btn_state_t state)
{
    if (state >= _LV_BTN_STATE_LAST)
    {
        return "STATE_OUT_OF_RANGE";
    }

    return button_state_names[state];
}
