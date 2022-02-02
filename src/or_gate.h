#pragma once
#include <vector>

class OrGate {
public:
    static bool Process(std::vector<int> inputs) {
        for (int i = 0; i < inputs.size(); i++) {
            if (inputs[i])
                return true;
        }
        return false;
    }
};
