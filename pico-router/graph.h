#pragma once

#include <stdint.h>

struct Edge {
    uint16_t to; 
    uint16_t cost;
};

struct Node {
    int32_t x;
    int32_t y;
    Edge edges[4];
    uint8_t edge_count;
};