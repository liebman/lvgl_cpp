#include "LVCanvas.h"

LVCanvas::LVCanvas(const LVBase* parent)
: LVBase()
{
    setObj(lv_canvas_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVCanvas::~LVCanvas()
{
}

void LVCanvas::setBuffer(void* buffer, lv_coord_t width, lv_coord_t height, lv_img_cf_t color_format)
{
    lv_canvas_set_buffer(getObj(), buffer, width, height, color_format);
}

void LVCanvas::setPalette(uint8_t index, lv_color_t color)
{
    lv_canvas_set_palette(getObj(), index, color);
}

void LVCanvas::setPixel(lv_coord_t x, lv_coord_t y, lv_color_t color)
{
    lv_canvas_set_px(getObj(), x, y, color);
}
