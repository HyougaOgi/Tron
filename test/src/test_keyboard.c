#include <stdint.h>
#include <stdio.h>

#include "raylib.h"

#ifdef TEST_KEYBOARD
uint32_t test_key(void) {
    if (IsKeyDown(KEY_A)) {
        printf("KEY_A is down\n");
    }
    if (IsKeyPressed(KEY_A)) {
        printf("KEY_A is pressed\n");
    }
    if (IsKeyDown(KEY_RIGHT)) {
        printf("KEY_RIGHT is down\n");
    }
    if (IsKeyPressed(KEY_RIGHT)) {
        printf("KEY_RIGHT is pressed\n");
    }
    if (IsKeyDown(KEY_LEFT)) {
        printf("KEY_LEFT is down\n");
    }
    if (IsKeyPressed(KEY_LEFT)) {
        printf("KEY_LEFT is pressed\n");
    }
    if (IsKeyDown(KEY_UP)) {
        printf("KEY_UP is down\n");
    }
    if (IsKeyPressed(KEY_UP)) {
        printf("KEY_UP is pressed\n");
    }
    if (IsKeyDown(KEY_DOWN)) {
        printf("KEY_DOWN is down\n");
    }
    if (IsKeyPressed(KEY_DOWN)) {
        printf("KEY_DOWN is pressed\n");
    }
    return 0;
}
#endif
