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

#include "LVContainer.h"

LVContainer::LVContainer(const LVBase* parent)
: LVBase()
{
    setObj(lv_cont_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVContainer::~LVContainer()
{
}

void LVContainer::setLayout(lv_layout_t layout)
{
    lv_cont_set_layout(getObj(), layout);
}

void LVContainer::setFit(lv_fit_t fit)
{
    lv_cont_set_fit(getObj(), fit);
}

void LVContainer::setFit(lv_fit_t hor, lv_fit_t vert)
{
    lv_cont_set_fit2(getObj(), hor, vert);
}

void LVContainer::setFit(lv_fit_t left, lv_fit_t right, lv_fit_t top, lv_fit_t bottom)
{
    lv_cont_set_fit4(getObj(), left, right, top, bottom);
}
