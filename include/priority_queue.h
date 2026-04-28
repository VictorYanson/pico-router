#pragma once

#include "graph.h"

struct CompareFScore {
    bool operator()(const Node& node_1, const Node& node_2) const {
        if (node_1.f_score != node_2.f_score) {
            return node_1.f_score < node_2.f_score;
        }
        return node_1.id < node_2.id;
    }
};

template <size_t Capacity>
struct PriorityQueue {
    std::array<Node, Capacity> data;
    size_t size = 0;

    PriorityQueue() : size(0) {}

    void add(Node n) {
        data[size++] = n;
        std::push_heap(data.begin(), data.begin() + size, CompareFScore());
    }
};
