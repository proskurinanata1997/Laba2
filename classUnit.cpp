#include "classUnit.h"

std::string ClassUnit::compile(unsigned int level, bool firstTab) const{
    std::string result = (firstTab?generateShift(level):"") + "class " + className + " {\n";
    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(modifierFieldVector[i].empty())
            continue;
        result += ACCESS_MODIFIERS[i] + ":\n"; // Добавляем к result имя модификатора
        for (const UnitPointer& unitPointer: modifierFieldVector[i])
            result += unitPointer->compile(level + 1, firstTab);
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
