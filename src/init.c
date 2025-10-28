#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "raylib.h"

#include "camera.h"
#include "common.h"
#include "models.h"
#include "window.h"

uint32_t tron_init(Tron_Core* core) {
    // Initialize window here
    // must be called before using camera/model functions
    init_window();

    core->camera = (Camera3D*)malloc(sizeof(Camera3D));
    if (init_camera(core->camera) != TRON_OK) {
        printf("Failed to initialize camera\n");
        return TRON_ERROR;
    }

    core->bike_model = (Object_Model*)malloc(sizeof(Object_Model));
    core->bike_model->model = (Model*)malloc(sizeof(Model));
    if (init_bike_model(core->bike_model) != TRON_OK) {
        printf("Failed to initialize bike model\n");
        return TRON_ERROR;
    }

    return TRON_OK;
}

// free core->camera; // to be called during cleanup
void tron_deinit(Tron_Core* core) {
    if (core->camera) {
        free(core->camera);
    }
    if (core->bike_model) {
        free(core->bike_model);
    }
    if (core->bike_model->model) {
        free(core->bike_model->model);
    }
    if (core) {
        free(core);
    }

    CloseWindow();
}