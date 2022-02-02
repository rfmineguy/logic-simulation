#pragma once
#include <iostream>
#include <unordered_map>
#include "gate.h"
#include "or_gate.h"
#include "and_gate.h"
#include "not_gate.h"

class Simulator {
public:
    Simulator();
    ~Simulator();

    void AddGate(const std::string& name, GateType type, const std::initializer_list<int>& inputs);
    void Dump();

    void Simulate();
    bool EvaluateGate(const std::string& name);

private:
    std::unordered_map<std::string, GateData> logicGates;
};
