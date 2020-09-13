#include "LVLabel.h"

LVLabel::LVLabel(const LVBase* parent)
: LVBase()
{
    setObj(lv_label_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVLabel::~LVLabel()
{
}

void LVLabel::setText(const char* text)
{
    lv_label_set_text(getObj(), text);
}

const char* LVLabel::getText()
{
    return lv_label_get_text(getObj());
}

void LVLabel::setStaticText(const char* text)
{
    lv_label_set_static_text(getObj(), text);
}

void LVLabel::setLabelAlign(lv_label_align_t align)
{
    lv_label_set_align(getObj(), align);
}

void LVLabel::setLongMode(lv_label_long_mode_t mode)
{
    lv_label_set_long_mode(getObj(), mode);
}
