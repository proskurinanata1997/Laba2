#include <QCoreApplication>
#include <abstractCPP.h>
#include <sharpAbstract.h>
#include <javaAbstract.h>
#include <iostream>
using namespace std;

std::string generateProgram(AbstractMethod* factory) {
    std::shared_ptr<AbstractClassUnit> myClass = factory->createClassUnit("MyClass", AbstractClassUnit::PUBLIC);

     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(factory->createMethodUnit( "testFunc1", "void",  0)),
         AbstractClassUnit::PUBLIC
     );
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(factory->createMethodUnit( "testFunc2", "void", AbstractMethodUnit::STATIC)),
         AbstractClassUnit::PRIVATE
     );
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(factory->createMethodUnit( "testFunc3", "void", AbstractMethodUnit::VIRTUAL | AbstractMethodUnit::CONST)),
         AbstractClassUnit::PUBLIC
     );
     auto method = std::shared_ptr<AbstractMethodUnit>(factory->createMethodUnit( "testFunc4", "void", AbstractMethodUnit::STATIC));
     method->add(std::shared_ptr<AbstractPrintUnit>(factory->createPrintOperatorUnit( R"(Hello,world!\n)")),0 );
     myClass->add( method, AbstractClassUnit::PROTECTED );
     return myClass->compile();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FactoryCplus p;
    FactorySharp s;
    FactoryJava j;
    cout <<"C++:\n" << generateProgram(&p) << endl;
    cout <<"C#:\n" << generateProgram(&s) << endl;
    cout <<"JAVA:\n" << generateProgram(&j) << endl;
    return a.exec();
}
