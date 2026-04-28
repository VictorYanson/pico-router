#pragma once

#include <stdint.h>

using graph_id = uint16_t;
using node_id = uint16_t;
using edge_id = uint16_t;

struct Graph {
    graph_id id;
};

struct Edge {
    edge_id id;
    uint16_t to; 
    uint16_t cost;
};

struct Node {
    node_id id;
    double g_score, f_score;
    Edge edges[4];
    uint16_t edge_count;
};