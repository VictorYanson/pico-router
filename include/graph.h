#pragma once

#include <stdint.h>
#include <vector>

using graph_id = uint16_t;
using node_id = uint16_t;
using edge_id = uint16_t;

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

struct Graph {
    graph_id id;
    std::vector<Node> nodes;

    const Node* getNode(uint16_t id) const {
        if (id < nodes.size()) {
            return &nodes[id];
        }
        return nullptr;
    }
};
