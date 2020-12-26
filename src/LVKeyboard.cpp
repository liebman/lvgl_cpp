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
