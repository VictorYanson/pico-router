#pragma once

#include <stdint.h>

struct Graph {
    uint32_t graph_id;
};

struct Edge {
    uint32_t edge_id;
    uint16_t to; 
    uint16_t cost;
};

struct Node {
    int32_t node_id;
    int32_t x, y;
    int32_t g, h, f;
    Edge edges[4];
    uint8_t edge_count;
};