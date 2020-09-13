#ifndef _LV_TAB_VIEW_H_
#define _LV_TAB_VIEW_H_
#include "LVBase.h"
#include "LVPage.h"

class LVTabView : public LVBase
{
    public:
        LVTabView(const LVBase* parent);
        virtual ~LVTabView();

        void clean();
        LVPage* addTab(const char* name);
        void setTabActive(uint16_t id, lv_anim_enable_t anim);
        void setAnimationTime(uint16_t time);
        void setButtonsPos(lv_tabview_btns_pos_t btns_pos);

#if LV_VERSION_CHECK(6,0,0) // these are not available in 7.x
        void setSliding(bool en);
        void setButtonsHidden(bool en);
        void setStyle(lv_tabview_style_t type, const lv_style_t *style);
#endif
};
#endif // _LV_TAB_VIEW_H_
