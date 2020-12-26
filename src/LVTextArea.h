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

#ifndef _LV_TEXT_AREA_H_
#define _LV_TEXT_AREA_H_
#include "LVBase.h"

class LVTextArea : public LVBase
{
    public:
        LVTextArea(const LVBase* parent);
        virtual ~LVTextArea();
        void addChar(uint32_t c);
        void addText(const char* txt);
        void delChar();
        void delCharForward();
        void setText(const char* txt);
        const char* getText();
        void setPlaceholderText(const char* txt);
        void setCurserPos(int16_t pos);
        void setCurserClickPos(bool en);
        void setCurserHidden(bool en);
        void setPasswordMode(bool en);
        void setOneLine(bool en);
        void setTextAlign(lv_label_align_t align);
        void setAcceptedChars(const char* list);
        void setMaxLength(uint16_t len);
        void setScrollBarMode(lv_scrollbar_mode_t mode);
        void setTextSel(bool en);
        void setPasswordShowTime(uint16_t time_ms);
        void setCurserBlinkTime(uint16_t time);
};
#endif // _LV_TEXT_AREA_H_
