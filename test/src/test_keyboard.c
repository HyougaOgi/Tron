#include <stdint.h>
#include <stdio.h>

#include "raylib.h"

#ifdef TEST_KEYBOARD
// uint32_t test_key(void) {
//     if (IsKeyDown(KEY_A)) {
//         printf("KEY_A is down\n");
//     }
//     if (IsKeyPressed(KEY_A)) {
//         printf("KEY_A is pressed\n");
//         DrawText("KEY_A pressed!", 10, 30, 20, RED);
//     }
//     if (IsKeyDown(KEY_RIGHT)) {
//         printf("KEY_RIGHT is down\n");
//     }
//     if (IsKeyPressed(KEY_RIGHT)) {
//         printf("KEY_RIGHT is pressed\n");
//     }
//     if (IsKeyDown(KEY_LEFT)) {
//         printf("KEY_LEFT is down\n");
//     }
//     if (IsKeyPressed(KEY_LEFT)) {
//         printf("KEY_LEFT is pressed\n");
//     }
//     if (IsKeyDown(KEY_UP)) {
//         printf("KEY_UP is down\n");
//     }
//     if (IsKeyPressed(KEY_UP)) {
//         printf("KEY_UP is pressed\n");
//     }
//     if (IsKeyDown(KEY_DOWN)) {
//         printf("KEY_DOWN is down\n");
//     }
//     if (IsKeyPressed(KEY_DOWN)) {
//         printf("KEY_DOWN is pressed\n");
//     }
//     return 0;
// }
uint32_t test_key(void) {
    int y = 20;

    if (IsKeyDown(KEY_A)) {
        DrawText("A down", 10, y, 20, BLACK);
        y += 22;
    }
    if (IsKeyPressed(KEY_A)) {
        DrawText("A PRESSED", 10, y, 20, RED);
        y += 22;
    }

    static bool prevA = false;
    bool nowA = IsKeyDown(KEY_A);
    if (!prevA && nowA) {
        DrawText("A EDGE(manual)", 10, y, 20, DARKGREEN);
        y += 22;
    }
    prevA = nowA;

    int k = GetKeyPressed(); // 0=なし、>0=何かのキー
    if (k != 0) {
        DrawText(TextFormat("GetKeyPressed: %d", k), 10, y, 20, BLUE);
        y += 22;
    }

    if (IsKeyPressedRepeat(KEY_A)) {
        DrawText("A REPEAT", 10, y, 20, MAGENTA);
        y += 22;
    }

    if (!IsWindowFocused()) {
        DrawText("UNFOCUSED WINDOW", 10, 200, 20, MAROON);
    }

    return 0;
}

#endif
