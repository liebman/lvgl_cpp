#ifndef _LV_BAR_CPP_H_
#define _LV_BAR_CPP_H_
#include "LVBase.h"

class LVBar : public LVBase
{
    public:
        LVBar(const LVBase* parent);
        virtual ~LVBar();
        void setValue(int16_t value, bool animate = false);
        void setRange(int16_t min, int16_t max);
};
#endif // _LV_BAR_CPP_H_
