#include <map>

#include "astar.h"

Path Astar::calculatePath(const Graph& graph, node_id start_node, node_id goal_node)
{
    const Node* start = graph.getNode(start_node);
    PriorityQueue open_set(*start);

    Path placeholder;
    return placeholder;
}