/*
 * MIT License
 *
 * Copyright (c) 2020 Christopher B. Liebman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#ifndef _LV_CHART_CPP_H_
#define _LV_CHART_CPP_H_
#include "LVBase.h"

class LVChart : public LVBase
{
    public:
        explicit LVChart(const LVBase* parent);
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
