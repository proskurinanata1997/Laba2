#include "sharpmethodunit.h"

std::string SharpMethodUnit::compile(unsigned int level, bool firstTab) const{
    std::string result=(firstTab?generateShift(level):"");

    if (methodModifier & SharpMethodUnit::Modifier::ABSTRACT)
        result += "abstract ";
    if (methodModifier & SharpMethodUnit::Modifier::VIRTUAL)
        result += "virtual ";
    if (methodModifier & SharpMethodUnit::Modifier::STATIC)
        result += "static ";
    if (methodModifier & SharpMethodUnit::Modifier::OVERRIDE)
        result += "override ";

    result += methodReturnType + ' ' + methodName + "()" + "{\n";

    for (const UnitPointer& unitPointer: methodBody)
            result += unitPointer->compile(level+1);

    result += generateShift(level) + "}\n";

    return result;
}
