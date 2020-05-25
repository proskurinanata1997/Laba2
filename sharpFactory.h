#ifndef SHARPABSTRACT_H
#define SHARPABSTRACT_H
#include "abstractMethod.h"
#include "sharpClassUnit.h"
#include "sharpmethodunit.h"
#include "sharpprintunit.h"
using Flags = unsigned int;

class FactorySharp : public AbstractMethod
{
public:
    std::shared_ptr<AbstractClassUnit> createClassUnit(const std::string& name, Flags modifier = 0);
    std::shared_ptr<AbstractMethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    std::shared_ptr<AbstractPrintUnit> createPrintOperatorUnit(const std::string& text);
};
#endif // SHARPABSTRACT_H
