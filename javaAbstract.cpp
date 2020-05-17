#include "javaAbstract.h"

std::shared_ptr<AbstractClassUnit> AbstractJava::createClassUnit(const std::string& name, Flags modifier){
   return std::make_shared<JavaClassUnit> (name, modifier);
}

std::shared_ptr<AbstractMethodUnit> AbstractJava::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
   return std::make_shared<JavaMethodUnit> (name, returnType, flags);
}

std::shared_ptr<AbstractPrintUnit> AbstractJava::createPrintOperatorUnit(const std::string& text){
   return std::make_shared<JavaPrintUnit> (text);
}
