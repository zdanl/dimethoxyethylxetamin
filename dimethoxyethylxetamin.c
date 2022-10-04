#include <stdio.h>

#include "methoxy.h"

static long __undefined;
static int32_t g_2 = (-1L);
static int32_t  func_1(void);

static int32_t  func_1(void) {
    return g_2;
}

int main (int argc, char* argv[]) {
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    
    return 0;
}

