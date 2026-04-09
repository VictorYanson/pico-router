cmake_minimum_required(VERSION 3.13)

project(pico_router C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Add executable
add_executable(${PROJECT_NAME}
    src/astar.cc
    src/demo_traversal.cc
)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE include)