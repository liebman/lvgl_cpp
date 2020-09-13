#ifndef _LV_KEYBOARD_H_
#define _LV_KEYBOARD_H_
#include "LVBase.h"
#include "LVTextArea.h"

class LVKeyboard : public LVBase
{
    public:
        LVKeyboard(const LVBase* parent);
        virtual ~LVKeyboard();

        void setTextArea(LVTextArea* ta);
        void setMode(lv_keyboard_mode_t mode);
        void setCurserManage(bool en);
        void setMap(lv_keyboard_mode_t mode, const char **map);
        void setControlMap(lv_keyboard_mode_t mode, const lv_btnmatrix_ctrl_t* ctrl_map);
        void defaultEventCB(lv_event_t event);
};
#endif // _LV_KEYBOARD_H_
