#include "LVTextArea.h"

LVTextArea::LVTextArea(const LVBase* parent)
: LVBase()
{
    setObj(lv_textarea_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVTextArea::~LVTextArea()
{
}

void LVTextArea::addChar(uint32_t c)
{
    lv_textarea_add_char(getObj(), c);
}

void LVTextArea::addText(const char* txt)
{
    lv_textarea_add_text(getObj(), txt);
}

void LVTextArea::delChar()
{
    lv_textarea_del_char(getObj());
}

void LVTextArea::delCharForward()
{
    lv_textarea_del_char_forward(getObj());
}

void LVTextArea::setText(const char* txt)
{
    lv_textarea_set_text(getObj(), txt);
}

const char* LVTextArea::getText()
{
    return lv_textarea_get_text(getObj());
}

void LVTextArea::setPlaceholderText(const char* txt)
{
    lv_textarea_set_placeholder_text(getObj(), txt);
}

void LVTextArea::setCurserPos(int16_t pos)
{
    lv_textarea_set_cursor_pos(getObj(), pos);
}

void LVTextArea::setCurserClickPos(bool en)
{
    lv_textarea_set_cursor_click_pos(getObj(), en);
}

void LVTextArea::setCurserHidden(bool en)
{
    lv_textarea_set_cursor_hidden(getObj(), en);
}

void LVTextArea::setPasswordMode(bool en)
{
    lv_textarea_set_pwd_mode(getObj(), en);
}

void LVTextArea::setOneLine(bool en)
{
    lv_textarea_set_one_line(getObj(), en);
}

void LVTextArea::setTextAlign(lv_label_align_t align)
{
    lv_textarea_set_text_align(getObj(), align);
}

void LVTextArea::setAcceptedChars(const char* list)
{
    lv_textarea_set_accepted_chars(getObj(), list);
}

void LVTextArea::setMaxLength(uint16_t len)
{
    lv_textarea_set_max_length(getObj(), len);
}

void LVTextArea::setScrollBarMode(lv_scrollbar_mode_t mode)
{
    lv_textarea_set_scrollbar_mode(getObj(), mode);
}

void LVTextArea::setTextSel(bool en)
{
    lv_textarea_set_text_sel(getObj(), en);
}

void LVTextArea::setPasswordShowTime(uint16_t time_ms)
{
    lv_textarea_set_pwd_show_time(getObj(), time_ms);
}

void LVTextArea::setCurserBlinkTime(uint16_t time)
{
    lv_textarea_set_cursor_blink_time(getObj(), time);
}
