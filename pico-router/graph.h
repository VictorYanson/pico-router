#pragma once

#include <stdint.h>

struct Edge {
    uint16_t to; 
    uint16_t cost;
};

struct Node {
    int32_t x, y;
    // node gScore, heuristic, fScore
    // int32_t g, h, f;
    Edge edges[4];
    uint8_t edge_count;
};