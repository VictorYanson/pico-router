#pragma once

#include <array>
#include <optional>
#include <stdint.h>

#include "common_types.h"
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
    // todo: add constructor
    static constexpr size_t MAX_NODES = 256;

    void Calculate(const Graph& graph, node_id start, node_id goal);

private:
    std::array <int32_t, MAX_NODES> gScore;
    std::array <int32_t, MAX_NODES> fScore;

    PriorityQueue<MAX_NODES> open_list;

    Path reconstruct_path(node_id current);
};