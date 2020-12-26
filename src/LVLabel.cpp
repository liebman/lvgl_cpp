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

#include "LVLabel.h"

LVLabel::LVLabel(const LVBase* parent)
: LVBase()
{
    setObj(lv_label_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVLabel::~LVLabel()
{
}

void LVLabel::setText(const char* text)
{
    lv_label_set_text(getObj(), text);
}

const char* LVLabel::getText()
{
    return lv_label_get_text(getObj());
}

void LVLabel::setStaticText(const char* text)
{
    lv_label_set_static_text(getObj(), text);
}

void LVLabel::setLabelAlign(lv_label_align_t align)
{
    lv_label_set_align(getObj(), align);
}

void LVLabel::setLongMode(lv_label_long_mode_t mode)
{
    lv_label_set_long_mode(getObj(), mode);
}
