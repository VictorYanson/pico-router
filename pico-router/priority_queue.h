#pragma once

#include <algorithm>
#include <array>
#include "graph.h"

constexpr size_t MAX_OPEN_NODES = 128;
std::array<Node, MAX_OPEN_NODES> open_list;
size_t current_size = 0;

struct CompareNodes {
    bool operator()(const Node& n1, const Node& n2) {
        return n1.f > n2.f;
    }
};

void addToOpenList(Node n)
{
    if (current_size < MAX_OPEN_NODES)
    {
        open_list[current_size] = n;
        current_size++;
        std::push_heap(open_list.begin(), open_list.begin() + current_size, CompareNodes());
    }
}

Node popBestNode() {
    std::pop_heap(open_list.begin(), open_list.begin() + current_size, CompareNodes());
    current_size--;
    return open_list[current_size];
}