#include <map>

#include "astar.h"

Node first_node {1, 1.0, 1.0};

Path Astar::calculatePath(const Graph& graph, node_id start_node, node_id goal_node)
{
    PriorityQueue open_set(start_node)

}