#ifndef _LV_PAGE_H_
#define _LV_PAGE_H_
#include "LVBase.h"

class LVPage : public LVBase
{
    public:
        LVPage(const LVBase* parent);
        LVPage(lv_obj_t* page);
        virtual ~LVPage();
        void setScrollBarMode(lv_scrollbar_mode_t mode);
};
#endif // _LV_PAGE_H_
