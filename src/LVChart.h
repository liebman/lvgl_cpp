#ifndef _LV_CHART_CPP_H_
#define _LV_CHART_CPP_H_
#include "LVBase.h"

class LVChart : public LVBase
{
    public:
        LVChart(const LVBase* parent);
        virtual ~LVChart();
        lv_chart_series_t* addSeries(lv_color_t color);
        void clearSeries(lv_chart_series_t* series);
        void setDivLineCount(uint8_t hdiv, uint8_t vdiv);
        void setYRange(lv_chart_axis_t axis, lv_coord_t ymin, lv_coord_t ymax);
        void setType(lv_chart_type_t type);
        void setPointCount(uint16_t count);
        void initPoints(lv_chart_series_t* series, lv_coord_t y);
        void setPoints(lv_chart_series_t* series, lv_coord_t y_array[]);
        void setNext(lv_chart_series_t* series, lv_coord_t y);
        void setUpdateMode(lv_chart_update_mode_t mode);
        void setXTickLength(uint8_t major_len, uint8_t minor_len);
        void setYTickLength(uint8_t major_len, uint8_t minor_len);
        void setSecondaryYTickLength(uint8_t major_len, uint8_t minor_len);
        void setXTickTexts(const char* comma_sep_texts, uint8_t num_ticks, lv_chart_axis_options_t options);
        void setYTickTexts(const char* comma_sep_texts, uint8_t num_ticks, lv_chart_axis_options_t options);
        void setSecondaryYTickTexts(const char* comma_sep_texts, uint8_t num_ticks, lv_chart_axis_options_t options);
        void setXStartPoint(lv_chart_series_t* series, uint16_t id);
        void setExtArray(lv_chart_series_t* series, lv_coord_t* array, uint16_t point_count);
        void setPointId(lv_chart_series_t* series, lv_coord_t value, uint16_t id);
        void setSeriesAxis(lv_chart_series_t* series, lv_chart_axis_t axis);
        lv_chart_type_t getType();
        uint16_t getPointCount();
        lv_coord_t getPointId(lv_chart_series_t* series, uint16_t id);
        lv_chart_axis_t getSeriesAxis(lv_chart_series_t* series);
        void refresh();
};
#endif // _LV_CHART_CPP_H_
