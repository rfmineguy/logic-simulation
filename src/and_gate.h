#pragma once
#include <vector>

class AndGate {
public:
    static bool Process(const std::vector<int>& inputs) {
        for (int i = 0; i < inputs.size(); i++) {
            if (inputs[i] == 0)
                return false;
        }
        return true;
    }
};
