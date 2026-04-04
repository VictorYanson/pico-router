#include "graph.h"

Node demo_graph[5] = {
    {0, 0, {{1, 10}}, 1},          // Node 0: at (0,0), connects to Node 1 with cost 10
    {1, 0, {{0, 10}, {2, 15}}, 2}, // Node 1: connects back to 0 and forward to 2
    {2, 1, {{1, 15}, {3, 5}}, 2},  // Node 2: connects to 1 and 3
    {3, 2, {{2, 5}, {4, 20}}, 2},  // Node 3: connects to 2 and 4
    {4, 2, {{3, 20}}, 1}           // Node 4: at (2,2), connects to Node 3
};