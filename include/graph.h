#pragma once

#include <stdint.h>

#include "common_types.h"

struct Graph {
    graph_id id;
};

struct Edge {
    edge_id id;
    uint16_t to; 
    uint16_t cost;
};

struct Node {
    int16_t node_id;
    int32_t x, y;
    int32_t g, h, f;
    Edge edges[4];
    uint8_t edge_count;
};