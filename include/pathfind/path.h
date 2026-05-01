#pragma once

#include <stdint.h>

#include <array>

#include "graph.h"

namespace pathfind {

struct Path {
  static constexpr size_t MAX_PATH_LENGTH = 64;
  std::array<node_id, MAX_PATH_LENGTH> nodes;
  size_t length = 0;

  bool add(node_id id) {
    if (length < MAX_PATH_LENGTH) {
      nodes[length++] = id;
      return true;
    }
    return false;  // full buffer
  }

  // todo: generated code double-check later
  void reverse() {
    if (length == 0) return;
    size_t i = 0;
    size_t j = length - 1;
    while (i < j) {
      node_id temp = nodes[i];
      nodes[i] = nodes[j];
      nodes[j] = temp;
      i++;
      j--;
    }
  }

  void clear() { length = 0; }
};

}  // namespace pathfind
