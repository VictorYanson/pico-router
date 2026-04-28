#pragma once

#include <bitset>

#include "graph.h"
#include "heuristic.h"
#include "path.h"
#include "priority_queue.h"

/**
* Basic implementation of A* algorithm
* Pseudo-code: https://en.wikipedia.org/wiki/A*_search_algorithm#Pseudocode
*/

class Astar {
public:
    Path calculatePath(const Graph& graph, uint32_t start, uint32_t goal);

private:
    std::array<int32_t, MAX_NODES> gScore;
    std::array<int32_t, MAX_NODES> fScore;

    PriorityQueue<MAX_NODES> open_list;
    std::bitset<MAX_NODES> closed_list;
    Path reconstructPath(uint32_t current);
};