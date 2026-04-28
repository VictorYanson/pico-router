#include <map>

#include "astar.h"

Path Astar::calculatePath(const Graph& graph, node_id start_node_id, node_id end_node_id)
{
    const Node* start_node = graph.getNode(start_node_id);
    const Node* end_node = graph.getNode(end_node_id);
    
    open_set.add(*start_node);

    Path placeholder;
    return placeholder;
}