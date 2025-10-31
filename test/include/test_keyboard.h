#pragma once
#include <stdint.h>

#ifdef TEST_KEYBOARD
uint32_t test_key(void);
#else
static inline uint32_t test_key(void) {
    return 0;
}
#endif
