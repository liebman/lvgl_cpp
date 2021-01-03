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

#ifndef _LV_IMAGE_H_
#define _LV_IMAGE_H_
#include "LVBase.h"

class LVImage : public LVBase
{
    public:
        explicit LVImage(const LVBase* parent);
        virtual ~LVImage();
        void setSource(lv_img_dsc_t* img);
        void setAutoResize(bool auto_resize);
        void setAntialias(bool antialias);
#if 0
        void setStyle(lv_canvas_style_t type, lv_style_t* style);
        void fillBG(lv_color_t color);
        void drawRect(lv_coord_t x, lv_coord_t y, lv_coord_t w, lv_coord_t h, const lv_style_t *style);
        void drawText(lv_coord_t x, lv_coord_t y, lv_coord_t max_w, const lv_style_t *style, const char *txt, lv_label_align_t align);
        void drawLine(const lv_point_t *points, uint32_t point_cnt, const lv_style_t *style);
#endif
};
#endif // _LV_IMAGE_H_
