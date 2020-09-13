#ifndef _LV_CONTAINER_CPP_H_
#define _LV_CONTAINER_CPP_H_
#include "LVBase.h"

class LVContainer : public LVBase
{
    public:
        LVContainer(const LVBase* parent);
        virtual ~LVContainer();
        void setLayout(lv_layout_t layout);
        void setFit(lv_fit_t fit);
        void setFit(lv_fit_t hor, lv_fit_t vert);
        void setFit(lv_fit_t left, lv_fit_t right, lv_fit_t top, lv_fit_t bottom);
};
#endif // _LV_CONTAINER_CPP_H_
