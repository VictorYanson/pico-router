#include <array>
#include <cstdint>

struct Path {
    static constexpr size_t MAX_PATH_LENGTH = 64;
    std::array<NodeId, MAX_PATH_LENGTH> nodes;
    size_t length = 0;

    bool add(NodeId id) {
        if (length < MAX_PATH_LENGTH) {
            nodes[length++] = id;
            return true;
        }
        return false; // Full buffer
    }

    void clear() { length = 0; }
};