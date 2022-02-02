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

#ifndef _LV_TAB_VIEW_H_
#define _LV_TAB_VIEW_H_
#include "LVBase.h"
#include "LVPage.h"

class LVTabView : public LVBase
{
    public:
        explicit LVTabView(const LVBase* parent);
        virtual ~LVTabView();

        void clean();
        LVPage* addTab(const char* name);
        void setTabActive(uint16_t id, lv_anim_enable_t anim);
        void setAnimationTime(uint16_t time);
        void setButtonsPos(lv_tabview_btns_pos_t btns_pos);
        uint16_t getTabAct();
        uint16_t getTabCount();
        LVPage* getTab(uint16_t idx);
        LVPage* getActiveTab();
#if LV_VERSION_CHECK(6,0,0) // these are not available in 7.x
        void setSliding(bool en);
        void setButtonsHidden(bool en);
        void setStyle(lv_tabview_style_t type, const lv_style_t *style);
#endif
};
#endif // _LV_TAB_VIEW_H_
