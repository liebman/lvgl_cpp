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

#include "LVImage.h"

LVImage::LVImage(const LVBase* parent)
: LVBase()
{
    setObj(lv_img_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVImage::~LVImage()
{
}

void LVImage::setSource(lv_img_dsc_t* img)
{
    lv_img_set_src(getObj(), img);
}

void LVImage::setAutoResize(bool auto_resize)
{
    lv_img_set_auto_size(getObj(), auto_resize);
}

void LVImage::setAntialias(bool antialias)
{
#if LV_VERSION_CHECK(7,0,0)
    lv_img_set_antialias(getObj(), antialias);
#endif
}
