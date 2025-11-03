#include <stdint.h>

#include "raylib.h"

#include "common.h"

uint32_t get_key_SHIFT_down(void) {
    if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_CTRL_down(void) {
    if (IsKeyDown(KEY_LEFT_CONTROL) || IsKeyDown(KEY_RIGHT_CONTROL)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_X_down(void) {
    if (IsKeyDown(KEY_X)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_Y_down(void) {
    if (IsKeyDown(KEY_Y)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_Z_down(void) {
    if (IsKeyDown(KEY_Z)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_J_down(void) {
    if (IsKeyDown(KEY_J)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_U_down(void) {
    if (IsKeyDown(KEY_U)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_I_down(void) {
    if (IsKeyDown(KEY_I)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}
uint32_t get_key_Q_down(void) {
    if (IsKeyDown(KEY_Q)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_E_down(void) {
    if (IsKeyDown(KEY_E)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_W_down(void) {
    if (IsKeyDown(KEY_W)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_T_down(void) {
    if (IsKeyDown(KEY_T)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_PLUS_down(void) {
    if (IsKeyDown(KEY_KP_ADD)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_MINUS_down(void) {
    if (IsKeyDown(KEY_KP_SUBTRACT)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}

uint32_t get_key_P_down(void) {
    if (IsKeyDown(KEY_P)) {
        return KEY_TRUE;
    }
    return KEY_FALSE;
}
