#pragma once
#include <stdint.h>

#include "raylib.h"

// #include "common.h"

uint32_t init_camera(Camera3D* camera);
void update_camera_position(Camera3D* camera);
void update_camera_target(Camera3D* camera);
void update_camera_UP(Camera3D* camera);
void update_camera_fovy(Camera3D* camera);
void update_camera_projection(Camera3D* camera);
void reset_camera(Camera3D* camera);
uint32_t update_camera_wrapper(Camera3D* camera);