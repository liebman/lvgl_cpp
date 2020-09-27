#include "LVStyle.h"

LVStyle::LVStyle()
{
    lv_style_init(&_style);
}

LVStyle::~LVStyle()
{
    lv_style_reset(&_style);
}

lv_style_t* LVStyle::getStyle()
{
    return &_style;
}

void LVStyle::setPadInner(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_pad_inner(&_style, state, pad);
}

void LVStyle::setPadTop(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_pad_top(&_style, state, pad);
}

void LVStyle::setPadBottom(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_pad_bottom(&_style, state, pad);
}

void LVStyle::setPadLeft(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_pad_left(&_style, state, pad);
}

void LVStyle::setPadRight(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_pad_right(&_style, state, pad);
}

void LVStyle::setPad(lv_state_t state, lv_style_int_t left, lv_style_int_t top, lv_style_int_t right, lv_style_int_t bottom)
{
    lv_style_set_pad_left(&_style, state, left);
    lv_style_set_pad_top(&_style, state, top);
    lv_style_set_pad_bottom(&_style, state, right);
    lv_style_set_pad_right(&_style, state, bottom);
}

void LVStyle::setMarginTop(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_margin_top(&_style, state, pad);
}

void LVStyle::setMarginBottom(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_margin_bottom(&_style, state, pad);
}

void LVStyle::setMarginLeft(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_margin_left(&_style, state, pad);
}

void LVStyle::setMarginRight(lv_state_t state, lv_style_int_t pad)
{
    lv_style_set_margin_right(&_style, state, pad);
}

void LVStyle::setMargin(lv_state_t state, lv_style_int_t left, lv_style_int_t top, lv_style_int_t right, lv_style_int_t bottom)
{
    lv_style_set_margin_left(&_style, state, left);
    lv_style_set_margin_top(&_style, state, top);
    lv_style_set_margin_bottom(&_style, state, right);
    lv_style_set_margin_right(&_style, state, bottom);
}

void LVStyle::setBackgroundColor(lv_state_t state, lv_color_t color)
{
    lv_style_set_bg_color(&_style, state, color);
}

void LVStyle::setBackgroundOpacity(lv_state_t state, lv_opa_t opa)
{
    lv_style_set_bg_opa(&_style, state, opa);
}

void LVStyle::setBackgroundGradientColor(lv_state_t state, lv_color_t color)
{
    lv_style_set_bg_grad_color(&_style, state, color);
}

void LVStyle::setBorderColor(lv_state_t state, lv_color_t color)
{
    lv_style_set_border_color(&_style, state, color);
}

void LVStyle::setBorderWidth(lv_state_t state, lv_style_int_t width)
{
    lv_style_set_border_width(&_style, state, width);
}

void LVStyle::setShadowColor(lv_state_t state, lv_color_t color)
{
    lv_style_set_shadow_color(&_style, state, color);
}

void LVStyle::setShadowWidth(lv_state_t state, lv_style_int_t width)
{
    lv_style_set_shadow_width(&_style, state, width);
}

void LVStyle::setOutlineColor(lv_state_t state, lv_color_t color)
{
    lv_style_set_outline_color(&_style, state, color);
}

void LVStyle::setOutlineWidth(lv_state_t state, lv_style_int_t width)
{
    lv_style_set_outline_width(&_style, state, width);
}

void LVStyle::setRadius(lv_state_t state, lv_style_int_t radius)
{
    lv_style_set_radius(&_style, state, radius);
}

void LVStyle::setClipCorner(lv_state_t state, bool en)
{
    lv_style_set_clip_corner(&_style, state, en);
}

void LVStyle::setLineWidth(lv_state_t state, lv_style_int_t width)
{
    lv_style_set_line_width(&_style, state, width);
}

void LVStyle::setSize(lv_state_t state, lv_style_int_t size)
{
    lv_style_set_size(&_style, state, size);
}