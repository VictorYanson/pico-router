#pragma once

#include "graph.h"

Graph createDemoGraph() {
  Graph g;
  g.id = 1;

  // 1. Initialize all nodes to 0 (no edges)
  for (auto& node : g.nodes) node.first_edge_index = 0;

  // --- NODE 0 Connections ---
  // Edge to Node 1
  g.edges[1] = {1, 10, 2};  // target: 1, cost: 10, next: index 2
  // Edge to Node 2
  g.edges[2] = {2, 20, 0};  // target: 2, cost: 20, next: 0 (end)
  g.nodes[0].first_edge_index = 1;

  // --- NODE 1 Connections ---
  // Edge back to Node 0
  g.edges[3] = {0, 10, 0};
  g.nodes[1].first_edge_index = 3;

  // --- NODE 2 Connections ---
  // Edge back to Node 0
  g.edges[4] = {0, 20, 0};
  g.nodes[2].first_edge_index = 4;

  return g;
}