#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include "abstractClassUnit.h"
#include <array>
#include <algorithm>

class ClassUnit : public AbstractClassUnit
{
    static const constexpr std::array<Flags,3> supportedModifier{PUBLIC, PRIVATE, PROTECTED};
public:
    ClassUnit(const std::string& name, Flags modifier = 0):  AbstractClassUnit(name, modifier){}
    std::string compile(unsigned int level = 0, bool firstTab = 1) const;
};
#endif // CLASSUNIT_H
