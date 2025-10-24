#include <stdint.h>

#include "raylib.h"

#include "common.h"

uint32_t init_camera(Camera3D* camera) {
    camera->position = (Vector3){100.0f, 100.0f, 0.0f};
    camera->target = (Vector3){0.0f, 0.0f, 0.0f};
    camera->up = (Vector3){0.0f, 1.0f, 0.0f};
    camera->fovy = 45.0f;
    camera->projection = CAMERA_PERSPECTIVE;
    return TRON_OK;
}