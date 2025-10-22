#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "raylib.h"

#include "camera.h"
#include "common.h"
#include "window.h"

uint32_t tron_init(Tron_Core* core) {
    core->camera = (Camera3D*)malloc(sizeof(Camera3D));
    if (init_camera(core->camera) != TRON_OK) {
        printf("Failed to initialize camera\n");
        return TRON_ERROR;
    }
    init_window();

    return TRON_OK; 
}

// free core->camera; // to be called during cleanup