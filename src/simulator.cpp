#include "simulator.h"
#include <initializer_list>

Simulator::Simulator() {}
Simulator::~Simulator() {}

void Simulator::AddGate(const std::string& name, GateType type, const std::initializer_list<int>& inputs) {
    GateData d {type, inputs};
    logicGates.emplace(name, d);
}

void Simulator::Dump() {
    std::cout << "Dumping gates" << std::endl;
    for (auto& [key, value] : logicGates) {
        std::cout << "\t" << key << ": " << value.GetType() << std::endl;
    }
}

bool Simulator::EvaluateGate(const std::string& name) {
    GateData& data = logicGates.at(name);
    switch (data.type) {
    case GateType::OR:
        return OrGate::Process(data.inputs);
    case GateType::AND:
        return AndGate::Process(data.inputs);
    case GateType::NOT:
        return NotGate::Process(data.inputs[0]);
    default: 
        return false;
    }
}
