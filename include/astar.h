#pragma once

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
    Path calculatePath(const Graph& graph, node_id start, node_id goal);

private:
    Path reconstructPath(node_id current);
};