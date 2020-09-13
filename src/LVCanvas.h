#ifndef _LV_CANVAS_H_
#define _LV_CANVAS_H_
#include "LVBase.h"

class LVCanvas : public LVBase
{
    public:
        LVCanvas(const LVBase* parent);
        virtual ~LVCanvas();
        void setBuffer(void* buffer, lv_coord_t width, lv_coord_t height, lv_img_cf_t color_format);
        void setPalette(uint8_t index, lv_color_t color);
        void setPixel(lv_coord_t x, lv_coord_t y, lv_color_t color);
};
#endif // _LV_IMAGE_H_
