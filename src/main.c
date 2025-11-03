#include <stdio.h>
#include <stdlib.h>

#include "raylib.h"

#include "camera.h"
#include "common.h"
#include "init.h"
#include "test_keyboard.h"

int main(void) {
    Tron_Core* core = (Tron_Core*)malloc(sizeof(Tron_Core));
    uint32_t init_result = tron_init(core);
    if (init_result != TRON_OK) {
        printf("Failed to initialize Tron_Core\n");
        return -1;
    }
    printf("Tron initialized successfully\n");

    // Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode3D(*core->camera);
        DrawFPS(0, 0);
        DrawGrid(50, 50.0f);
        // DrawGrid(10, 10.0f);
        // DrawModel(*core->bike_model->model, core->bike_model->position, MODEL_SIZE, BLACK);

        // Model
        DrawModelWires(*core->bike_model->model, core->bike_model->position, MODEL_SIZE, BLACK);

        core->bike_model->position.z -= 0.01f;
        (void)update_camera_wrapper(core->camera);

        EndMode3D();
        EndDrawing();
    }

    if (tron_deinit(core) != TRON_OK) {
        printf("Failed to deinitialize Tron_Core\n");
        return -1;
    }
    printf("Tron deinitialized successfully\n");
    return 0;
}