#include <stdint.h>
#include <stdlib.h>

#include "raylib.h"

#include "common.h"
#include "loader.h"

uint32_t load_ModelFile(char* file_path, Model* model) {
    if (model == NULL) {
        return TRON_ERROR;
    }
    *model = LoadModel(file_path);
    return TRON_OK;
}
