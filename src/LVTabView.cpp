#include "LVTabView.h"

LVTabView::LVTabView(const LVBase* parent)
: LVBase()
{
    setObj(lv_tabview_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVTabView::~LVTabView()
{
}

void LVTabView::clean()
{
#if LV_VERSION_CHECK(7,0,0)
    lv_tabview_clean_tab(getObj());
#else
    lv_tabview_clean(getObj());
#endif
}

LVPage* LVTabView::addTab(const char* name)
{
    return new LVPage(lv_tabview_add_tab(getObj(), name));
}

void LVTabView::setTabActive(uint16_t id, lv_anim_enable_t anim)
{
    lv_tabview_set_tab_act(getObj(), id, anim);
}

void LVTabView::setAnimationTime(uint16_t time)
{
    lv_tabview_set_anim_time(getObj(), time);
}

void LVTabView::setButtonsPos(lv_tabview_btns_pos_t btns_pos)
{
    lv_tabview_set_btns_pos(getObj(), btns_pos);
}

#if LV_VERSION_CHECK(6,0,0) // these are not available in 7.x
void LVTabView::setSliding(bool en)
{
    lv_tabview_set_sliding(getObj(), en);
}

void LVTabView::setStyle(lv_tabview_style_t type, const lv_style_t *style)
{
    lv_tabview_set_style(getObj(), type, style);
}

void LVTabView::setButtonsHidden(bool en)
{
    lv_tabview_set_btns_hidden(getObj(), en);
}
#endif
