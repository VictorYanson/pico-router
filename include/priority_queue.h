#pragma once

#include <set>

#include "graph.h"

struct CompareFScore {
    bool operator()(const Node& node_1, const Node& node_2) const {
        if (node_1.f_score != node_2.f_score) {
            return node_1.f_score < node_2.f_score;
        }
        return node_1.id < node_2.id;
    }
};

struct PriorityQueue {
    std::set<Node, CompareFScore> node_set;

    PriorityQueue(Node start_node) { 
        node_set.insert(start_node);
    }

    // helper functions
    node_id getTopNode() { 
        if (node_set.empty()) {
            return -1;
        }
        return node_set.begin()->id;
    }

    void add(Node new_node) {
        node_set.insert(new_node);
    }

    void pop(Node); // todo: finish
    void clear(); // todo: finish
};