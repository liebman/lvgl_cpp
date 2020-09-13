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
