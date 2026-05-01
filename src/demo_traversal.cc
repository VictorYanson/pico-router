#include "pathfind/demo_traversal.h"

#include <cstdio>

#include "pathfind/astar.h"

using namespace pathfind;

int main(int argc, char** argv) {
  const Graph test_graph = createDemoGraph();

  Astar planner;

  Path result = planner.calculatePath(test_graph, 0, 1);

  if (result.length == 0) {
    printf("No path found!\n");
  } else {
    printf("Path found with %zu nodes:\n", result.length);
    for (size_t i = 0; i < result.length; i++) {
      printf("Node: %u\n", result.nodes[i]);
    }
  }

  return 0;
}