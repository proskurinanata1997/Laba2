#include "abstractmethodunit.h"

const std::array<std::string, 6> AbstractMethodUnit::MODIFIERS = {"const", "static", "virtual", "final", "abstract", "override"};

AbstractMethodUnit::AbstractMethodUnit(const std::string& name, const std::string& returnType, Flags flags):
    methodName(name), methodReturnType(returnType), methodModifier(flags) {}

void AbstractMethodUnit::add(const UnitPointer& unitPointer, Flags = 0){
    methodBody.push_back(unitPointer);
}
