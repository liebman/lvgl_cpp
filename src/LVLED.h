#ifndef _LV_LED_CPP_H_
#define _LV_LED_CPP_H_
#include "LVBase.h"

class LVLED : public LVBase
{
    public:
        LVLED(const LVBase* parent);
        virtual ~LVLED();
        void set(bool on);
};
#endif // _LV_LED_CPP_H_
