/*
 * MIT License
 *
 * Copyright (c) 2022 Christopher B. Liebman
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

#include "LVCheckBox.h"

LVCheckBox::LVCheckBox(const LVBase* parent)
: LVBase()
{
    setObj(lv_checkbox_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVCheckBox::~LVCheckBox()
{
}

void LVCheckBox::setText(const char* txt)
{
    lv_checkbox_set_text(getObj(), txt);
}

void LVCheckBox::setTextStatic(const char* txt)
{
    lv_checkbox_set_text_static(getObj(), txt);
}

void LVCheckBox::setChecked(bool checked)
{
    lv_checkbox_set_checked(getObj(), checked);
}

void LVCheckBox::setDisabled()
{
    lv_checkbox_set_disabled(getObj());
}

void LVCheckBox::setState(lv_btn_state_t state)
{
    lv_checkbox_set_state(getObj(), state);
}

const char* LVCheckBox::getText()
{
    return lv_checkbox_get_text(getObj());
}

bool LVCheckBox::isChecked()
{
    return lv_checkbox_is_checked(getObj());
}

bool LVCheckBox::isInactive()
{
    return lv_checkbox_is_inactive(getObj());
}

lv_btn_state_t LVCheckBox::getState()
{
    return lv_checkbox_get_state(getObj());
}
