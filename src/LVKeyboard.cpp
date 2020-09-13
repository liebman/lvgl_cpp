#include "LVKeyboard.h"

LVKeyboard::LVKeyboard(const LVBase* parent)
: LVBase()
{
    setObj(lv_keyboard_create(parent != nullptr ? parent->getObj() : lv_scr_act(), nullptr));
}

LVKeyboard::~LVKeyboard()
{
}


void LVKeyboard::setTextArea(LVTextArea* ta)
{
    lv_obj_t* lvta = nullptr;
    if (ta != nullptr)
    {
        lvta = ta->getObj();
    }
    lv_keyboard_set_textarea(getObj(), lvta);
}

void LVKeyboard::setMode(lv_keyboard_mode_t mode)
{
    lv_keyboard_set_mode(getObj(), mode);
}

void LVKeyboard::setCurserManage(bool en)
{
    lv_keyboard_set_cursor_manage(getObj(), en);
}

void LVKeyboard::setMap(lv_keyboard_mode_t mode, const char **map)
{
    lv_keyboard_set_map(getObj(), mode, map);
}

void LVKeyboard::setControlMap(lv_keyboard_mode_t mode, const lv_btnmatrix_ctrl_t* ctrl_map)
{
    lv_keyboard_set_ctrl_map(getObj(), mode, ctrl_map);
}

void LVKeyboard::defaultEventCB(lv_event_t event)
{
    lv_keyboard_def_event_cb(getObj(), event);
}
