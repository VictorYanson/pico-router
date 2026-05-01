#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace pathfind {

using graph_id = uint16_t;
using node_id = uint32_t;

static constexpr size_t MAX_NODES = 10000;
static constexpr size_t MAX_EDGES = 40000;

struct Edge {
  uint16_t target;
  uint16_t cost;
  uint32_t next_edge_index;
};

struct Node {
  uint32_t first_edge_index;
};

struct Graph {
  graph_id id;
  std::array<Node, MAX_NODES> nodes;
  std::array<Edge, MAX_EDGES> edges;  // 0 == terminator sentinel value

  const Node* getNode(node_id id) const {
    if (id < nodes.size()) {
      return &nodes[id];
    }
    return nullptr;
  }
};

}  // namespace pathfind
