#include "javamethodunit.h"

std::string JavaMethodUnit::compile(unsigned int level, bool firstTab) const{

    std::string result=(firstTab?generateShift(level):"");

    if (methodModifier & JavaMethodUnit::Modifier::OVERRIDE)
        result += "@Override ";
    if (methodModifier & JavaMethodUnit::Modifier::STATIC)
        result += "static ";
    if (methodModifier & JavaMethodUnit::Modifier::ABSTRACT)
        result += "abstract ";
    else if (methodModifier & JavaMethodUnit::Modifier::FINAL)
        result += "final ";

    result += methodReturnType + ' ' + methodName + "()" + " {\n";

    for (const UnitPointer& unitPointer: methodBody)
        result += unitPointer->compile(level+1);
    result += generateShift(level) + "}\n";
    return result;
}
