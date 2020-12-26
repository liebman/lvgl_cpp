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

#include "LVChart.h"

LVChart::LVChart(const LVBase* parent)
: LVBase()
{
    setObj(lv_chart_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVChart::~LVChart()
{
}

lv_chart_series_t* LVChart::addSeries(lv_color_t color)
{
    return lv_chart_add_series(getObj(), color);
}

void LVChart::clearSeries(lv_chart_series_t* series)
{
    lv_chart_clear_series(getObj(), series);
}

void LVChart::setDivLineCount(uint8_t hdiv, uint8_t vdiv)
{
    lv_chart_set_div_line_count(getObj(), hdiv, vdiv);
}

void LVChart::setYRange(lv_chart_axis_t axis, lv_coord_t ymin, lv_coord_t ymax)
{
    lv_chart_set_y_range(getObj(), axis, ymin, ymax);
}

void LVChart::setType(lv_chart_type_t type)
{
    lv_chart_set_type(getObj(), type);
}

void LVChart::setPointCount(uint16_t count)
{
    lv_chart_set_point_count(getObj(), count);
}

void LVChart::initPoints(lv_chart_series_t* series, lv_coord_t y)
{
    lv_chart_init_points(getObj(), series, y);
}

void LVChart::setPoints(lv_chart_series_t* series, lv_coord_t y_array[])
{
    lv_chart_set_points(getObj(), series, y_array);
}

void LVChart::setNext(lv_chart_series_t* series, lv_coord_t y)
{
    lv_chart_set_next(getObj(), series, y);
}

void LVChart::setUpdateMode(lv_chart_update_mode_t mode)
{
    lv_chart_set_update_mode(getObj(), mode);
}

void LVChart::setXTickLength(uint8_t major_len, uint8_t minor_len)
{
    lv_chart_set_x_tick_length(getObj(), major_len, minor_len);
}

void LVChart::setYTickLength(uint8_t major_len, uint8_t minor_len)
{
    lv_chart_set_y_tick_length(getObj(), major_len, minor_len);
}

void LVChart::setSecondaryYTickLength(uint8_t major_len, uint8_t minor_len)
{
    lv_chart_set_secondary_y_tick_length(getObj(), major_len, minor_len);
}

void LVChart::setXTickTexts(const char* comma_sep_texts, uint8_t num_ticks, lv_chart_axis_options_t options)
{
    lv_chart_set_x_tick_texts(getObj(), comma_sep_texts, num_ticks, options);
}

void LVChart::setYTickTexts(const char* comma_sep_texts, uint8_t num_ticks, lv_chart_axis_options_t options)
{
    lv_chart_set_y_tick_texts(getObj(), comma_sep_texts, num_ticks, options);
}

void LVChart::setSecondaryYTickTexts(const char* comma_sep_texts, uint8_t num_ticks, lv_chart_axis_options_t options)
{
    lv_chart_set_secondary_y_tick_texts(getObj(), comma_sep_texts, num_ticks, options);
}

void LVChart::setXStartPoint(lv_chart_series_t* series, uint16_t id)
{
    lv_chart_set_x_start_point(getObj(), series, id);
}

void LVChart::setExtArray(lv_chart_series_t* series, lv_coord_t* array, uint16_t point_count)
{
    lv_chart_set_ext_array(getObj(), series, array, point_count);
}

void LVChart::setPointId(lv_chart_series_t* series, lv_coord_t value, uint16_t id)
{
    lv_chart_set_point_id(getObj(), series, value, id);
}

void LVChart::setSeriesAxis(lv_chart_series_t* series, lv_chart_axis_t axis)
{
    lv_chart_set_series_axis(getObj(), series, axis);
}

lv_chart_type_t LVChart::getType()
{
    return lv_chart_get_type(getObj());
}

uint16_t LVChart::getPointCount()
{
    return lv_chart_get_point_count(getObj());
}

lv_coord_t LVChart::getPointId(lv_chart_series_t* series, uint16_t id)
{
    return lv_chart_get_point_id(getObj(), series, id);
}

lv_chart_axis_t LVChart::getSeriesAxis(lv_chart_series_t* series)
{
    return lv_chart_get_series_axis(getObj(), series);
}

void LVChart::refresh()
{
    lv_chart_refresh(getObj());
}
