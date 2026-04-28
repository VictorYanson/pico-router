#pragma once

#include <stdint.h>
#include <vector>

using graph_id = uint16_t;
using node_id = uint16_t;
using edge_id = uint16_t;

static constexpr size_t MAX_NODES = 10000; 

struct Edge {
    edge_id id;
    uint16_t to;
    uint16_t cost;
    uint32_t next_edge_index;
};

struct Node {
    node_id id;
    int32_t g_score, f_score;
    uint16_t edge_count;
    uint32_t first_edge_index;
};

struct Graph {
    graph_id id;
    //todo: find a better data struct for this
    std::vector<Node> nodes;

    const Node* getNode(uint16_t id) const {
        if (id < nodes.size()) {
            return &nodes[id];
        }
        return nullptr;
    }
};
