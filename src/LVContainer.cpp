#include "LVContainer.h"

LVContainer::LVContainer(const LVBase* parent)
: LVBase()
{
    setObj(lv_cont_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVContainer::~LVContainer()
{
}

void LVContainer::setLayout(lv_layout_t layout)
{
    lv_cont_set_layout(getObj(), layout);
}

void LVContainer::setFit(lv_fit_t fit)
{
    lv_cont_set_fit(getObj(), fit);
}

void LVContainer::setFit(lv_fit_t hor, lv_fit_t vert)
{
    lv_cont_set_fit2(getObj(), hor, vert);
}

void LVContainer::setFit(lv_fit_t left, lv_fit_t right, lv_fit_t top, lv_fit_t bottom)
{
    lv_cont_set_fit4(getObj(), left, right, top, bottom);
}
