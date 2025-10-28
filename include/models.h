#pragma once
#include <stdint.h>

#include "raylib.h"

#define BIKE_FILE_PATH "./assets/models/bike1/bike.obj"

typedef struct Object_Model {
    char* name;
    Model* model;
    Vector3 position;
} Object_Model;


uint32_t init_bike_model(Object_Model* bike_model);