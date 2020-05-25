#include "javaFactory.h"

std::shared_ptr<AbstractClassUnit> FactoryJava::createClassUnit(const std::string& name, Flags modifier){
   return std::make_shared<JavaClassUnit> (name, modifier);
}

std::shared_ptr<AbstractMethodUnit> FactoryJava::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
   return std::make_shared<JavaMethodUnit> (name, returnType, flags);
}

std::shared_ptr<AbstractPrintUnit> FactoryJava::createPrintOperatorUnit(const std::string& text){
   return std::make_shared<JavaPrintUnit> (text);
}
