#pragma once

#include <algorithm>
#include <array>
#include "graph.h"

/** 
* todo: rewrite this class
*/

template <size_t MAX_OPEN_NODES>

class PriorityQueue {
public:
    std::array<Node, MAX_OPEN_NODES> queue;

    struct CompareNodes {
        bool operator()(const Node& n1, const Node& n2) {
            return n1.f > n2.f;
        }
    };

    void add(Node);
    void remove(Node);
    void clear();

private:
    size_t current_size = 0;
};