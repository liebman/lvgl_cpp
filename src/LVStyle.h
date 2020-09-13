#ifndef _LV_STYLE_H_
#define _LV_STYLE_H_
#include <lvgl.h>
#include <functional>

class LVStyle
{
    public:
        LVStyle();
        virtual ~LVStyle();
        lv_style_t* getStyle();

        void setPadInner(lv_state_t state, lv_style_int_t pad);
        void setPadTop(lv_state_t state, lv_style_int_t pad);
        void setPadBottom(lv_state_t state, lv_style_int_t pad);
        void setPadLeft(lv_state_t state, lv_style_int_t pad);
        void setPadRight(lv_state_t state, lv_style_int_t pad);
        void setPad(lv_state_t state, lv_style_int_t left, lv_style_int_t top, lv_style_int_t right, lv_style_int_t bottom);

        void setMarginTop(lv_state_t state, lv_style_int_t pad);
        void setMarginBottom(lv_state_t state, lv_style_int_t pad);
        void setMarginLeft(lv_state_t state, lv_style_int_t pad);
        void setMarginRight(lv_state_t state, lv_style_int_t pad);
        void setMargin(lv_state_t state, lv_style_int_t left, lv_style_int_t top, lv_style_int_t right, lv_style_int_t bottom);

        void setBackgroundColor(lv_state_t state, lv_color_t color);
        void setBackgroundOpacity(lv_state_t state, lv_opa_t opa);
        void setBackgroundGradientColor(lv_state_t state, lv_color_t color);

        void setBorderColor(lv_state_t state, lv_color_t color);
        void setBorderWidth(lv_state_t state, lv_style_int_t width);

        void setShadowColor(lv_state_t state, lv_color_t color);
        void setShadowWidth(lv_state_t state, lv_style_int_t width);

        void setOutlineColor(lv_state_t state, lv_color_t color);
        void setOutlineWidth(lv_state_t state, lv_style_int_t width);

        void setRadius(lv_state_t state, lv_style_int_t radius);
        void setClipCorner(lv_state_t state, bool en);

        void setTextColor(lv_state_t state, lv_color_t color);
        void setTextFont(lv_state_t state, lv_font_t* font);    
    protected:
        lv_style_t _style;
};

#endif // _LV_BASE_CPP_H_