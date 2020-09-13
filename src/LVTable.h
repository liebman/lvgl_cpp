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
