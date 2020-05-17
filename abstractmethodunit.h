#ifndef ABCTRACTMETHODUNIT_H
#define ABCTRACTMETHODUNIT_H
#include "unit.h"
#include <array>
#include <algorithm>

class AbstractMethodUnit: public Unit
{
public:
    static const std::array<std::string,6> MODIFIERS;
    AbstractMethodUnit(const std::string&, const std::string&, Flags);
    enum Modifier{ //модификаторы в виде битовых флагов
        CONST = 1,
        STATIC = 1 << 1,
        VIRTUAL = 1 << 2,
        FINAL = 1 << 3,
        ABSTRACT = 1 << 4,
        OVERRIDE = 1 << 5
    };
    void add(const UnitPointer&, Flags);
protected:
    std::string methodName;
    std::string methodReturnType;
    Flags methodModifier;
    UnitVector methodBody;
};
#endif // ABCTRACTMETHODUNIT_H
