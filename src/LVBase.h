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

#ifndef _LV_BASE_CPP_H_
#define _LV_BASE_CPP_H_
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif
#include <functional>
#include "LVStyle.h"

class LVBase
{
    public:
    using LVEventCB = std::function<void(lv_event_t)>;
        virtual ~LVBase();
        lv_obj_t* getObj() const;
        void setAutoRealign(bool realign);
        void align(LVBase* ref, lv_align_t align, lv_coord_t x_ofs, lv_coord_t y_ofs);
        void alignX(LVBase* ref, lv_align_t align, lv_coord_t x_ofs);
        void alignY(LVBase* ref, lv_align_t align, lv_coord_t y_ofs);
        void realign();
        void setParent(LVBase* parent);
        void setPos(lv_coord_t x, lv_coord_t y);
        void setX(lv_coord_t x);
        void setY(lv_coord_t y);
        lv_coord_t getX();
        lv_coord_t getY();
        void setSize(lv_coord_t w, lv_coord_t h);
        void setWidth(lv_coord_t w);
        void setHeight(lv_coord_t h);
        void setHidden(bool hide);
        void setEventCB(LVEventCB cb);
        void invalidate();
        void addStyle(lv_part_style_t part, lv_style_t* style);
        void addStyle(lv_part_style_t part, LVStyle* style);
        void setState(lv_state_t state);
        void addState(lv_state_t state);
        void clearState(lv_state_t state);
        void applyTheme(lv_theme_style_t name);
        void setDragParent(bool en);
        void moveForeground();
        void moveBackground();

        lv_coord_t getWidth();
        lv_coord_t getHeight();

        void refreshStyle(lv_part_style_t part, lv_style_property_t prop);
        void setStyleBackgroundColor(lv_part_style_t part, lv_state_t state, lv_color_t color);
        void setStyleValueStr(lv_part_style_t part, lv_state_t state, const char* value);
        void setStylePadInner(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStylePadTop(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStylePadBottom(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStylePadLeft(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStylePadRight(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleBorderWidth(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleMarginTop(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleMarginBottom(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleMarginLeft(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleMarginRight(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleMarginHorizontal(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleMarginVertical(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleMarginAll(lv_part_style_t part, lv_state_t state, lv_style_int_t value);
        void setStyleTextFont(lv_part_style_t part, lv_state_t state, lv_font_t* font);
        void setStyleTextColor(lv_part_style_t part, lv_state_t state, lv_color_t color);
    
        static const char* getEventName(lv_event_t event);

        // block copy constructors
        LVBase(const LVBase& temp_obj) = delete; 
        LVBase& operator=(const LVBase& temp_obj) = delete;

    protected:
        LVBase();
        void setObj(lv_obj_t* obj);

    private:
        static void eventGateway(lv_obj_t* obj, lv_event_t event);

        lv_obj_t* _obj;
        LVEventCB _cb;
};

#endif // _LV_BASE_CPP_H_