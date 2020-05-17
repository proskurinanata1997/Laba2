#ifndef JAVAABSTRACT_H
#define JAVAABSTRACT_H
#include "abstractMethod.h"
#include "javaCassUnit.h"
#include "javamethodunit.h"
#include "javaprintunit.h"
using Flags = unsigned int;

class AbstractJava : public AbstractMethod
{
public:
    std::shared_ptr<AbstractClassUnit> createClassUnit(const std::string& name, Flags modifier = 0);
    std::shared_ptr<AbstractMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    std::shared_ptr<AbstractPrintUnit> createPrintOperatorUnit(const std::string& text);
};
#endif // JAVAABSTRACT_H
