#ifndef _LV_LABEL_CPP_H_
#define _LV_LABEL_CPP_H_
#include "LVBase.h"

class LVLabel : public LVBase
{
    public:
        LVLabel(const LVBase* parent);
        virtual ~LVLabel();
        void setText(const char* text);
        const char* getText();
        void setStaticText(const char* text);
        void setLabelAlign(lv_label_align_t align);
        void setLongMode(lv_label_long_mode_t mode);
};
#endif // _LV_LABEL_CPP_H_
