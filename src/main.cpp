#include <iostream>
#include "simulator.h"

int main() {
    Simulator simulator;
    simulator.AddGate("gate0", GateType::AND, {1, 1, 0});
    simulator.AddGate("gate1", GateType::OR, {1, 0});

    simulator.Dump();
    std::cout << "gate0 = " << simulator.EvaluateGate("gate0") << std::endl;
    std::cout << "gate1 = " << simulator.EvaluateGate("gate1") << std::endl;
}
