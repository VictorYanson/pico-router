#include "astar.h"

Path Astar::calculatePath(const Graph& graph, node_id start_id, node_id goal_id)
{
    // Initialzation
    open_list.clear();
    closed_list.reset();
    gScore.fill(INT32_MAX);
    fScore.fill(INT32_MAX);

    gScore[start_id] = 0;

    uint32_t placeholder_heuristic = 100;
    fScore[start_id] = placeholder_heuristic;

    open_list.add(start_id, fScore[start_id]);

    // Expansion loop
    while (open_list.size > 0) {
        QueueNode current = open_list.pop();
        
        if (current.id == goal_id) {
            return reconstructPath(current.id);
        }


    }

    Path placeholder;
    return placeholder;
}

Path Astar::reconstructPath(node_id current)
{
    Path placeholder;
    return placeholder;
}