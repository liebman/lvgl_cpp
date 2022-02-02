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

uint16_t LVTabView::getTabAct()
{
    return lv_tabview_get_tab_act(getObj());
}

uint16_t LVTabView::getTabCount()
{
    return lv_tabview_get_tab_count(getObj());
}

LVPage* LVTabView::getTab(uint16_t idx)
{
    lv_obj_t* obj = lv_tabview_get_tab(getObj(), idx);
    LVPage* page = (LVPage*)lv_obj_get_user_data(obj);
    assert(page != nullptr);
    return page;
}

LVPage* LVTabView::getActiveTab()
{
    return getTab(getTabAct());
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
