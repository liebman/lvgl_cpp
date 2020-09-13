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
