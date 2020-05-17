#ifndef ABSTRACTCLASSUNIT_H
#define ABSTRACTCLASSUNIT_H
#include "unit.h"

class AbstractClassUnit : public Unit
{
public:
    static const std::array<std::string, 7> ACCESS_MODIFIERS;
    explicit AbstractClassUnit(const std::string& name, Flags modifier): className(name),  classModifier(modifier){
        modifierFieldVector.resize(ACCESS_MODIFIERS.size()); //изменяет размер modifierFieldVector до ACCESS_MODIFIERS.size
    }
    enum AccessModifier {
        PUBLIC = 1,
        PROTECTED,
        PRIVATE,
        INTERNAL,
        PROTECTEDINTERNAL,
        PRIVATEPROTECTED
    };
    void add(const UnitPointer&, Flags = 0);
protected:
    std::string className;
    std::vector<UnitVector> modifierFieldVector;
    Flags classModifier;
};
#endif // ABSTRACTCLASSUNIT_H
