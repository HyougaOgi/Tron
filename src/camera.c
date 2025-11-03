#include <stdint.h>
#include <stdio.h>

#include "raylib.h"

#include "common.h"
#include "keyboard.h"

uint32_t init_camera(Camera3D* camera) {
    camera->position = (Vector3){90.0f, 50.0f, -600.0f};
    camera->target = (Vector3){0.0f, 0.0f, 0.0f};
    camera->up = (Vector3){0.0f, 1.0f, 0.0f};
    camera->fovy = 45.0f;
    camera->projection = CAMERA_PERSPECTIVE;
    if (!camera) {
        return TRON_ERROR;
    }
    return TRON_OK;
}

void update_camera_position(Camera3D* camera) {

    uint32_t x = get_key_X_down();
    uint32_t y = get_key_Y_down();
    uint32_t z = get_key_Z_down();
    uint32_t ctrl = get_key_CTRL_down();

    if ((ctrl == KEY_TRUE) && (x == KEY_TRUE)) {
        camera->position.x -= 1.0f;
    } else if (x == KEY_TRUE) {
        camera->position.x += 1.0f;
    }
    if ((ctrl == KEY_TRUE) && (y == KEY_TRUE)) {
        camera->position.y -= 1.0f;
    } else if (y == KEY_TRUE) {
        camera->position.y += 1.0f;
    }
    if ((ctrl == KEY_TRUE) && (z == KEY_TRUE)) {
        camera->position.z -= 1.0f;
    } else if (z == KEY_TRUE) {
        camera->position.z += 1.0f;
    }
}

void update_camera_target(Camera3D* camera) {

    uint32_t x = get_key_J_down();
    uint32_t y = get_key_U_down();
    uint32_t z = get_key_I_down();
    uint32_t ctrl = get_key_CTRL_down();

    if ((ctrl == KEY_TRUE) && (x == KEY_TRUE)) {
        camera->target.x -= 1.0f;
    } else if (x == KEY_TRUE) {
        camera->target.x += 1.0f;
    }
    if ((ctrl == KEY_TRUE) && (y == KEY_TRUE)) {
        camera->target.y -= 1.0f;
    } else if (y == KEY_TRUE) {
        camera->target.y += 1.0f;
    }
    if ((ctrl == KEY_TRUE) && (z == KEY_TRUE)) {
        camera->target.z -= 1.0f;
    } else if (z == KEY_TRUE) {
        camera->target.z += 1.0f;
    }
}

void update_camera_UP(Camera3D* camera) {
    uint32_t x = get_key_Q_down();
    uint32_t y = get_key_E_down();
    uint32_t z = get_key_W_down();
    uint32_t ctrl = get_key_CTRL_down();

    if ((ctrl == KEY_TRUE) && (x == KEY_TRUE)) {
        camera->up.x -= 1.0f;
    } else if (x == KEY_TRUE) {
        camera->up.x += 1.0f;
    }
    if ((ctrl == KEY_TRUE) && (y == KEY_TRUE)) {
        camera->up.y -= 1.0f;
    } else if (y == KEY_TRUE) {
        camera->up.y += 1.0f;
    }
    if ((ctrl == KEY_TRUE) && (z == KEY_TRUE)) {
        camera->up.z -= 1.0f;
    } else if (z == KEY_TRUE) {
        camera->up.z += 1.0f;
    }
}

// modify
void update_camera_fovy(Camera3D* camera) {
    uint32_t p = get_key_PLUS_down();
    uint32_t m = get_key_MINUS_down();

    if (p == KEY_TRUE) {
        camera->fovy -= 1.0f;
    }
    if (m == KEY_TRUE) {
        camera->fovy -= 1.0f;
    }
}

//modify?
void update_camera_projection(Camera3D* camera) {
    if ((get_key_P_down() == KEY_TRUE)) {
        camera->projection =
            (camera->projection == CAMERA_PERSPECTIVE) ? CAMERA_ORTHOGRAPHIC : CAMERA_PERSPECTIVE;
    }
}

void reset_camera(Camera3D* camera) {
    uint32_t t = get_key_T_down();
    uint32_t ctrl = get_key_CTRL_down();
    uint32_t shift = get_key_SHIFT_down();
    if ((t == KEY_TRUE) && (ctrl == KEY_TRUE) && (shift == KEY_TRUE)) {
        (void)init_camera(camera);
        printf("camera reset");
    }
}

uint32_t update_camera_wrapper(Camera3D* camera) {
    if (!camera) {
        return TRON_ERROR;
    }
    update_camera_position(camera);
    update_camera_target(camera);
    update_camera_UP(camera);
    reset_camera(camera);
    return TRON_OK;
}