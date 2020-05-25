#ifndef ABSTRACTMETHOD_H
#define ABSTRACTMETHOD_H
#include "abstractClassUnit.h"
#include "abstractmethodunit.h"
#include "abstractprintunit.h"
using Flags = unsigned int;

class AbstractMethod
{
public:
    virtual std::shared_ptr<AbstractClassUnit> createClassUnit(const std::string& name, Flags modifier = 0) = 0;
    virtual std::shared_ptr<AbstractMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) = 0;
    virtual std::shared_ptr<AbstractPrintUnit> createPrintOperatorUnit(const std::string& name) = 0;
    virtual ~AbstractMethod()=default;
};
#endif // ABSTRACTMETHOD_H
