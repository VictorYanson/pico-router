#pragma once

#include <array>
#include <stdint.h>

#include "graph.h"

struct Path {
    static constexpr size_t MAX_PATH_LENGTH = 64;
    std::array<node_id, MAX_PATH_LENGTH> nodes;
    size_t length = 0;

    bool add(node_id id) {
        if (length < MAX_PATH_LENGTH) {
            nodes[length++] = id;
            return true;
        }
        return false; // Full buffer
    }

    void clear() { length = 0; }
};