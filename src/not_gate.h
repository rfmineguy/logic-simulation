#pragma once
#include <vector>

class NotGate {
public:
    static bool Process(const int& input) {
        bool val = static_cast<bool>(input);
        return !val;
    }
};
