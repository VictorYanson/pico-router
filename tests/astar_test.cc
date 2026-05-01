#include <gtest/gtest.h>

#include "pathfind/astar.h"
#include "pathfind/demo_traversal.h"

namespace pathfind {
namespace {

TEST(AstarOutline, FindsPathInDemoGraph) {
  Graph graph = createDemoGraph();
  Astar planner;

  Path path = planner.calculatePath(graph, 0, 1);

  ASSERT_GT(path.length, 0U);
  EXPECT_EQ(path.nodes[0], 0U);
  EXPECT_EQ(path.nodes[path.length - 1], 1U);
}

TEST(AstarOutline, ReturnsEmptyPathForUnreachableGoal) {
  Graph graph = createDemoGraph();
  Astar planner;

  // Node 999 has no incoming edges in the demo graph setup.
  Path path = planner.calculatePath(graph, 0, 999);

  EXPECT_EQ(path.length, 0U);
}

TEST(AstarOutline, DISABLED_HandlesStartEqualsGoal) {
  // Outline-only placeholder:
  // verify whether start==goal returns [start] or empty path,
  // then lock the expected behavior with assertions.
}

TEST(AstarOutline, DISABLED_RejectsOutOfBoundsNodeIdsGracefully) {
  // Outline-only placeholder:
  // add input validation in Astar and assert no crash / empty path.
}

}  // namespace
}  // namespace pathfind
