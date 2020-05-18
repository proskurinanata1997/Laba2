#ifndef ABSTRACTCPP_H
#define ABSTRACTCPP_H
#include "abstractMethod.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include "classUnit.h"
using Flags = unsigned int;

class FactoryCplus : public AbstractMethod
{
public:
    std::shared_ptr<AbstractClassUnit> createClassUnit(const std::string& name, Flags modifier = 0);
    std::shared_ptr<AbstractMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    std::shared_ptr<AbstractPrintUnit> createPrintOperatorUnit(const std::string& text);
};
#endif // ABSTRACTCPP_H
