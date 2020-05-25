#ifndef METODUNIT_H
#define METODUNIT_H
#include "abstractmethodunit.h"
#include <array>
#include <algorithm>

class MethodUnit : public AbstractMethodUnit
{
public:
    MethodUnit(const std::string& name, const std::string& returnType, Flags flags ): AbstractMethodUnit (name,returnType, flags){}
    std::string compile(unsigned int level = 0, bool firstTab = 1) const;
};
#endif // METODUNIT_H
