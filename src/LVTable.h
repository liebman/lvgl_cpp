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

#ifndef _LV_TABLE_H_
#define _LV_TABLE_H_
#include "LVBase.h"

class LVTable : public LVBase
{
    public:
        LVTable(const LVBase* parent);
        virtual ~LVTable();
        void setRowCount(uint16_t cnt);
        void setColumnCount(uint16_t cnt);
        void setColumnWidth(uint16_t column, lv_coord_t w);
        void setCellValue(uint16_t row, uint16_t column, const char* value);
        void setCellAlign(uint16_t row, uint16_t column, lv_label_align_t align);
        void setCellType(uint16_t row, uint16_t column, uint8_t type);
        void setCellCrop(uint16_t row, uint16_t column, bool en);
};
#endif // _LV_TABLE_H_
