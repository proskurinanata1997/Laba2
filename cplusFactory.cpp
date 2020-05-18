#include "cplusFactory.h"

std::shared_ptr<AbstractClassUnit> FactoryCplus::createClassUnit(const std::string& name, Flags modifier){
    return std::make_shared<ClassUnit> (name, modifier);
}

std::shared_ptr<AbstractMethodUnit> FactoryCplus::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
    return std::make_shared<MethodUnit> (name, returnType, flags);
}

std::shared_ptr<AbstractPrintUnit> FactoryCplus::createPrintOperatorUnit(const std::string& text){
    return std::make_shared<PrintOperatorUnit> (text);
}
