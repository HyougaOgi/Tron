#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 450

#define TRON_OK 0x00ACEDEF
#define TRON_ERROR 0x00000BAD

struct Tron_Core {
    Camera3D* camera;
    Vector3* cubePosition;
};
typedef struct Tron_Core Tron_Core;