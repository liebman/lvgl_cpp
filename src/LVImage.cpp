#include "LVImage.h"

LVImage::LVImage(const LVBase* parent)
: LVBase()
{
    setObj(lv_img_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVImage::~LVImage()
{
}

void LVImage::setSource(lv_img_dsc_t* img)
{
    lv_img_set_src(getObj(), img);
}

void LVImage::setAutoResize(bool auto_resize)
{
    lv_img_set_auto_size(getObj(), auto_resize);
}

void LVImage::setAntialias(bool antialias)
{
#if LV_VERSION_CHECK(7,0,0)
    lv_img_set_antialias(getObj(), antialias);
#endif
}
