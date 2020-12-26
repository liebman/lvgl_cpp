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

#include "LVTable.h"

LVTable::LVTable(const LVBase* parent)
: LVBase()
{
    setObj(lv_table_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVTable::~LVTable()
{
}

void LVTable::setRowCount(uint16_t cnt)
{
    lv_table_set_row_cnt(getObj(), cnt);
}

void LVTable::setColumnCount(uint16_t cnt)
{
    lv_table_set_col_cnt(getObj(), cnt);
}

void LVTable::setColumnWidth(uint16_t column, lv_coord_t w)
{
    lv_table_set_col_width(getObj(), column, w);
}

void LVTable::setCellValue(uint16_t row, uint16_t column, const char* value)
{
    lv_table_set_cell_value(getObj(), row, column, value);
}

void LVTable::setCellAlign(uint16_t row, uint16_t column, lv_label_align_t align)
{
    lv_table_set_cell_align(getObj(), row, column, align);
}

void LVTable::setCellType(uint16_t row, uint16_t column, uint8_t type)
{
    lv_table_set_cell_type(getObj(), row, column, type);
}

void LVTable::setCellCrop(uint16_t row, uint16_t column, bool en)
{
    lv_table_set_cell_crop(getObj(), row, column, en);
}
