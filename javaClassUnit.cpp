#include "javaClassUnit.h"

std::string JavaClassUnit::compile(unsigned int level, bool firstTab) const{
    std::string result = (firstTab?generateShift(level):"");
    if (std::find(supportedModifier.begin(), supportedModifier.end(), classModifier) != supportedModifier.end())
        result += ACCESS_MODIFIERS[classModifier] + " ";
    result += "class " + className + " {\n";
    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(modifierFieldVector[i].empty())
            continue;
        for (const UnitPointer& unitPointer: modifierFieldVector[i])
            result += generateShift(level+1) + ACCESS_MODIFIERS[i] + " " + unitPointer->compile(level + 1, 0);
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
