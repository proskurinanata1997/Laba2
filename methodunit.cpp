#include "methodunit.h"

std::string MethodUnit::compile(unsigned int level, bool firstTab) const{
    std::string result=(firstTab?generateShift(level):"");

    if (methodModifier & MethodUnit::Modifier::STATIC)
        result += "static ";
    else if (methodModifier & MethodUnit::Modifier::VIRTUAL)
        result += "virtual ";

    result += methodReturnType + ' ' + methodName + "()";

    if (methodModifier & MethodUnit::Modifier::CONST)
        result += " const";

    result += " {\n";

    for (const UnitPointer& unitPointer: methodBody)
            result += unitPointer->compile(level+1);

    result += generateShift(level) + "}\n";

    return result;
}
