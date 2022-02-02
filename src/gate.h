#include <vector>
#include <string>

enum class GateType { AND, OR, NOT };
struct GateData {
    GateType type;
    std::vector<int> inputs;

    std::string GetType() {
        switch (type){
            case GateType::AND: return "AND";
            case GateType::OR: return "OR";
            case GateType::NOT: return "NOT";
        }
    }
};
