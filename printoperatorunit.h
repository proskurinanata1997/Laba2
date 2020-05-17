#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H
#include "abstractprintunit.h"

class PrintOperatorUnit : public AbstractPrintUnit
{
public:
    PrintOperatorUnit(const std::string& text): AbstractPrintUnit(text){}
    std::string compile(unsigned int level = 0, bool firstTab = 1) const {
        return (firstTab?generateShift(level):"") + "printf(\"" + printText +"\");\n"; // Генерация на языке C++ вывода в консоль нужного текста
    }
};
#endif // PRINTOPERATORUNIT_H
