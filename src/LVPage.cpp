#include "LVPage.h"

LVPage::LVPage(const LVBase* parent)
: LVBase()
{
    setObj(lv_page_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVPage::LVPage(lv_obj_t* page)
: LVBase()
{
    setObj(page);
}

LVPage::~LVPage()
{
}

void LVPage::setScrollBarMode(lv_scrollbar_mode_t mode)
{
    lv_page_set_scrlbar_mode(getObj(), mode);
}
