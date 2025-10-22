#include <stdio.h>
#include <stdlib.h>

#include "raylib.h"

#include "common.h"
#include "init.h"


int main(void)
{
    Tron_Core* core = (Tron_Core*)malloc(sizeof(Tron_Core));
    uint32_t init_result = tron_init(core);
    if (init_result != TRON_OK) {
        printf("Failed to initialize Tron_Core\n");
        return TRON_ERROR;
    }
    // Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            BeginMode3D(*core->camera);
                // needing to read ref 
                DrawFPS(10, 10);
                DrawGrid(10000, 10000.0f);
            EndMode3D();
        EndDrawing();
    }

    CloseWindow();
    free(core->camera);
    free(core);
    return 0;
}