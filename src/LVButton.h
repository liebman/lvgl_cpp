#ifndef _LV_BUTTON_CPP_H_
#define _LV_BUTTON_CPP_H_
#include "LVBase.h"

class LVButton : public LVBase
{
    public:
        LVButton(const LVBase* parent);
        virtual ~LVButton();
        void setState(lv_btn_state_t state);
        lv_btn_state_t getState();
        void setFit(lv_fit_t fit);
        void setFit(lv_fit_t fit_h, lv_fit_t fit_v);
        void setCheckable(bool en);

        static const char* getStateName(lv_btn_state_t state);

    protected:
        lv_obj_t* _label;
};

#endif // _LV_BUTTON_CPP_H_
