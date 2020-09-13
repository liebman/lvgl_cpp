#ifndef _LV_IMAGE_H_
#define _LV_IMAGE_H_
#include "LVBase.h"

class LVImage : public LVBase
{
    public:
        LVImage(const LVBase* parent);
        virtual ~LVImage();
        void setSource(lv_img_dsc_t* img);
        void setAutoResize(bool auto_resize);
        void setAntialias(bool antialias);
#if 0
        void setStyle(lv_canvas_style_t type, lv_style_t* style);
        void fillBG(lv_color_t color);
        void drawRect(lv_coord_t x, lv_coord_t y, lv_coord_t w, lv_coord_t h, const lv_style_t *style);
        void drawText(lv_coord_t x, lv_coord_t y, lv_coord_t max_w, const lv_style_t *style, const char *txt, lv_label_align_t align);
        void drawLine(const lv_point_t *points, uint32_t point_cnt, const lv_style_t *style);
#endif
};
#endif // _LV_IMAGE_H_
