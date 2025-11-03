#pragma once
#include "models.h"

#define WINDOW_WIDTH  800
#define WINDOW_HEIGHT 450

#define TRON_OK       0x00ACEDEF
#define TRON_ERROR    0x00000BAD

#define MODEL_SIZE    100

#define KEY_TRUE        0x10000000
#define KEY_FALSE       0x10000001


typedef struct Tron_Core {
    Camera3D* camera;
    Object_Model* bike_model;
} Tron_Core;
