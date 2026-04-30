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
  Path calculatePath(const Graph& graph, node_id start, node_id goal);

 private:
  std::array<node_id, MAX_NODES> gScore;
  std::array<node_id, MAX_NODES> fScore;

  std::array<node_id, MAX_NODES> came_from_list;
  PriorityQueue<MAX_NODES> open_list;
  std::bitset<MAX_NODES> closed_list;
  Path reconstructPath(node_id current);
};