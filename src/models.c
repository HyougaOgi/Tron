#include <stdio.h>
#include <stdint.h>

#include "raylib.h"

#include "common.h"
#include "loader.h"
#include "models.h"


uint32_t init_bike_model(Object_Model* bike_model){
    uint32_t load_result = load_ModelFile(BIKE_FILE_PATH, bike_model->model);
    if (load_result != TRON_OK) {
        printf("Failed to load bike model from %s\n", BIKE_FILE_PATH);
        return TRON_ERROR;
    }
    bike_model->position = (Vector3){0.0f, 0.0f, 0.0f};
    bike_model->name = "Bike";
    return TRON_OK;
}