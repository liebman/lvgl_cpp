#ifndef _LV_SPINBOX_H_
#define _LV_SPINBOX_H_
#include "LVBase.h"

class LVSpinBox : public LVBase
{
    public:
        LVSpinBox(const LVBase* parent);
        virtual ~LVSpinBox();
        void setRollover(bool en);
        void setValue(int32_t value);
        void setDigitFormat(uint8_t digit_count, uint8_t seperator_position);
        void setStep(uint32_t step);
        void setRange(int32_t range_min, int32_t range_max);
        void setPaddingLeft(uint8_t padding);
        bool getRollover();
        int32_t getValue();
        void stepNext();
        void stepPrev();
        void increment();
        void decrement();
};
#endif // _LV_SPINBOX_H_
