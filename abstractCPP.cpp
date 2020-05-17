#include "abstractCPP.h"

std::shared_ptr<AbstractClassUnit> AbstractCplus::createClassUnit(const std::string& name, Flags modifier){
    return std::make_shared<ClassUnit> (name, modifier);
}

std::shared_ptr<AbstractMethodUnit> AbstractCplus::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
    return std::make_shared<MethodUnit> (name, returnType, flags);
}

std::shared_ptr<AbstractPrintUnit> AbstractCplus::createPrintOperatorUnit(const std::string& text){
    return std::make_shared<PrintOperatorUnit> (text);
}
