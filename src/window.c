#include <stdio.h>

#include "raylib.h"

#include "common.h"

void init_window(void) {
    // int display = GetCurrentMonitor();

    // printf("%d\n", display);
    // int screenHeight = 0;
    // int screenWidth = 0;
    // if (display <= 0){
    //     screenHeight = WINDOW_HEIGHT ;
    //     screenWidth = WINDOW_WIDTH ;
    //     printf("\x1b[32mdefault window size\x1b[0m\n");
    // } else{
    //     printf("\x1b[3msuccess monitor detected\x1b[0m\n");
    //     if (screenWidth <= 0 || screenHeight <= 0) {
    //         screenWidth  = WINDOW_WIDTH;
    //         screenHeight = WINDOW_HEIGHT;
    //         printf("\x1b[3mfailed to get monitor info\x1b[0m\n");
    //     }else{
    //         screenWidth  = GetMonitorWidth(display);
    //         screenHeight = GetMonitorHeight(display);
    //         printf("\x1b[32mset to full screen size\x1b[0m\n");
    //     }
    // }
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Tron");
    // modify later for fullscreen
}
