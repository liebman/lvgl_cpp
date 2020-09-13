#ifndef _LV_SLIDER_CPP_H_
#define _LV_SLIDER_CPP_H_
#include "LVBase.h"

class LVSlider : public LVBase
{
    public:
        LVSlider(const LVBase* parent);
        virtual ~LVSlider();
        void setValue(int16_t value, bool animate = false);
        int16_t getValue();
        void setLeftValue(int16_t value, bool animate = false);
        int16_t getLeftValue();
        void setRange(int16_t min, int16_t max);
        void setType(lv_slider_type_t type);
        bool isDragged();
};
#endif // _LV_SLIDER_CPP_H_
