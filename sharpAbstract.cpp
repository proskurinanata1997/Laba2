#include "sharpAbstract.h"

std::shared_ptr<AbstractClassUnit> AbstractSharp::createClassUnit(const std::string& name, Flags modifier){
    return std::make_shared<SharpClassUnit> (name, modifier);
}

std::shared_ptr<AbstractMethodUnit> AbstractSharp::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
    return std::make_shared<SharpMethodUnit> (name, returnType, flags);
}

std::shared_ptr<AbstractPrintUnit> AbstractSharp::createPrintOperatorUnit(const std::string& text){
    return std::make_shared<SharpPrintUnit> (text);
}
