#include "LVBase.h"
#include "esp_log.h"

static const char* event_names[] =
{
    "LV_EVENT_PRESSED",             /**< The object has been pressed*/
    "LV_EVENT_PRESSING",            /**< The object is being pressed (called continuously while pressing)*/
    "LV_EVENT_PRESS_LOST",          /**< User is still pressing but slid cursor/finger off of the object */
    "LV_EVENT_SHORT_CLICKED",       /**< User pressed object for a short period of time, then released it. Not called if dragged. */
    "LV_EVENT_LONG_PRESSED",        /**< Object has been pressed for at least `LV_INDEV_LONG_PRESS_TIME`.  Not called if dragged.*/
    "LV_EVENT_LONG_PRESSED_REPEAT", /**< Called after `LV_INDEV_LONG_PRESS_TIME` in every
                                       `LV_INDEV_LONG_PRESS_REP_TIME` ms.  Not called if dragged.*/
    "LV_EVENT_CLICKED",             /**< Called on release if not dragged (regardless to long press)*/
    "LV_EVENT_RELEASED",            /**< Called in every cases when the object has been released*/
    "LV_EVENT_DRAG_BEGIN",
    "LV_EVENT_DRAG_END",
    "LV_EVENT_DRAG_THROW_BEGIN",
    "LV_EVENT_GESTURE",           /**< The object has been gesture*/
    "LV_EVENT_KEY",
    "LV_EVENT_FOCUSED",
    "LV_EVENT_DEFOCUSED",
    "LV_EVENT_LEAVE",
    "LV_EVENT_VALUE_CHANGED",      /**< The object's value has changed (i.e. slider moved) */
    "LV_EVENT_INSERT",
    "LV_EVENT_REFRESH",
    "LV_EVENT_APPLY",  /**< "Ok", "Apply" or similar specific button has clicked*/
    "LV_EVENT_CANCEL", /**< "Close", "Cancel" or similar specific button has clicked*/
    "LV_EVENT_DELETE", /**< Object is being deleted */
};

static const char* TAG = "LVBase";

LVBase::LVBase()
{
}

LVBase::~LVBase()
{
    lv_obj_del_async(_obj);
    _obj = nullptr;
}

void LVBase::setObj(lv_obj_t* obj)
{
    _obj = obj;
    lv_obj_set_user_data(_obj, this);
}

lv_obj_t* LVBase::getObj() const
{
    return _obj;
}

void LVBase::setAutoRealign(bool realign)
{
    lv_obj_set_auto_realign(_obj, realign);
}

void LVBase::align(LVBase* ref, lv_align_t align, lv_coord_t x_ofs, lv_coord_t y_ofs)
{
    lv_obj_align(_obj, ref != nullptr ? ref->_obj : nullptr, align, x_ofs, y_ofs);
}

void LVBase::alignX(LVBase* ref, lv_align_t align, lv_coord_t x_ofs)
{
    lv_obj_align_x(_obj, ref != nullptr ? ref->_obj : nullptr, align, x_ofs);
}

void LVBase::alignY(LVBase* ref, lv_align_t align, lv_coord_t y_ofs)
{
    lv_obj_align_y(_obj, ref != nullptr ? ref->_obj : nullptr, align, y_ofs);
}

void LVBase::realign()
{
    lv_obj_realign(_obj);
}

void LVBase::setParent(LVBase* parent)
{
    lv_obj_set_parent(_obj, parent->_obj);
}

void LVBase::setPos(lv_coord_t x, lv_coord_t y)
{
    lv_obj_set_pos(_obj, x, y);
}

void LVBase::setX(lv_coord_t x)
{
    lv_obj_set_x(_obj, x);
}

void LVBase::setY(lv_coord_t y)
{
    lv_obj_set_x(_obj, y);
}

lv_coord_t LVBase::getX()
{
    return lv_obj_get_x(_obj);
}

lv_coord_t LVBase::getY()
{
    return lv_obj_get_y(_obj);
}

void LVBase::setSize(lv_coord_t w, lv_coord_t h)
{
    lv_obj_set_size(_obj, w, h);
}

void LVBase::setWidth(lv_coord_t w)
{
    lv_obj_set_width(_obj, w);
}

void LVBase::setHeight(lv_coord_t h)
{
    lv_obj_set_height(_obj, h);
}

void LVBase::setHidden(bool hide)
{
    lv_obj_set_hidden(_obj, hide);
}

void LVBase::setEventCB(LVEventCB cb)
{
    lv_obj_set_event_cb(_obj, &LVBase::eventGateway);
    _cb = cb;
}

void LVBase::invalidate()
{
    lv_obj_invalidate(_obj);
}

void LVBase::eventGateway(lv_obj_t* obj, lv_event_t event)
{
    LVBase* base = (LVBase*)lv_obj_get_user_data(obj);
    if (base == nullptr)
    {
        ESP_LOGE(TAG, "missing LVBase* in user data for event!");
        return;
    }
    base->_cb(event);
}

void LVBase::addStyle(lv_part_style_t part, lv_style_t* style)
{
    lv_obj_add_style(_obj, part, style);
}

void LVBase::addStyle(lv_part_style_t part, LVStyle* style)
{
    lv_obj_add_style(_obj, part, style->getStyle());
}

void LVBase::setState(lv_state_t state)
{
    lv_obj_set_state(_obj, state);
}

void LVBase::addState(lv_state_t state)
{
    lv_obj_add_state(_obj, state);
}

void LVBase::clearState(lv_state_t state)
{
    lv_obj_clear_state(_obj, state);
}

void LVBase::applyTheme(lv_theme_style_t name)
{
    lv_theme_apply(_obj, name);
}

void LVBase::setDragParent(bool en)
{
    lv_obj_set_drag_parent(_obj, en);
}

void LVBase::moveForeground()
{
    lv_obj_move_foreground(_obj);
}

void LVBase::moveBackground()
{
    lv_obj_move_background(_obj);
}

lv_coord_t LVBase::getWidth()
{
    return lv_obj_get_width(_obj);
}

lv_coord_t LVBase::getHeight()
{
    return lv_obj_get_height(_obj);
}

void LVBase::refreshStyle(lv_part_style_t part, lv_style_property_t prop)
{
    lv_obj_refresh_style(_obj, part, prop);
}

void LVBase::setStyleBackgroundColor(lv_part_style_t part, lv_state_t state, lv_color_t color)
{
    lv_obj_set_style_local_bg_color(_obj, part, state, color);
}

void LVBase::setStyleValueStr(lv_part_style_t part, lv_state_t state, const char* value)
{
    lv_obj_set_style_local_value_str(_obj, part, state, value);
}

void LVBase::setStylePadInner(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_pad_inner(_obj, part, state, value);
}

void LVBase::setStylePadTop(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_pad_top(_obj, part, state, value);
}

void LVBase::setStylePadBottom(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_pad_bottom(_obj, part, state, value);
}

void LVBase::setStylePadLeft(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_pad_left(_obj, part, state, value);
}

void LVBase::setStylePadRight(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_pad_right(_obj, part, state, value);
}

void LVBase::setStyleBorderWidth(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_border_width(_obj, part, state, value);
}

void LVBase::setStyleMarginTop(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_margin_top(_obj, part, state, value);
}

void LVBase::setStyleMarginBottom(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_margin_bottom(_obj, part, state, value);
}

void LVBase::setStyleMarginLeft(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_margin_left(_obj, part, state, value);
}

void LVBase::setStyleMarginRight(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_margin_right(_obj, part, state, value);
}

void LVBase::setStyleMarginHorizontal(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_margin_hor(_obj, part, state, value);
}

void LVBase::setStyleMarginVertical(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_margin_ver(_obj, part, state, value);
}

void LVBase::setStyleMarginAll(lv_part_style_t part, lv_state_t state, lv_style_int_t value)
{
    lv_obj_set_style_local_margin_all(_obj, part, state, value);
}
 

const char* LVBase::getEventName(lv_event_t event)
{
    if (event > LV_EVENT_DELETE)
    {
        return "EVENT_OUT_OF_RANGE";
    }
    return event_names[event];
}
