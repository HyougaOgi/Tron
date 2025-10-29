#include <stdio.h>
#include <stdlib.h>

#include "raylib.h"

#include "common.h"
#include "init.h"

int main(void) {
    Tron_Core* core = (Tron_Core*)malloc(sizeof(Tron_Core));
    uint32_t init_result = tron_init(core);
    if (init_result != TRON_OK) {
        printf("Failed to initialize Tron_Core\n");
        return TRON_ERROR;
    }
    printf("Tron initialized successfully\n");

    // Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode3D(*core->camera);
        // needing to read ref
        // DrawFPS(10, 10);
        DrawFPS(0, 0);
        DrawGrid(50, 50.0f);
        // DrawGrid(10, 10.0f);
        // DrawModel(*core->bike_model->model, core->bike_model->position, MODEL_SIZE, BLACK);

        DrawModelWires(*core->bike_model->model, core->bike_model->position, MODEL_SIZE, BLACK);

        core->bike_model->position.z -= 0.01f;

        EndMode3D();
        EndDrawing();
    }

    tron_deinit(core);
    return 0;
}