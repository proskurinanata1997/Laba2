#ifndef UNIT_H
#define UNIT_H
#include <memory>
#include <vector>

class Unit
{
public:
    using Flags = unsigned int; // Беззнаковое целое число
    virtual ~Unit() = default;
    using UnitPointer = std::shared_ptr<Unit>;
    using UnitVector = std::vector<UnitPointer>;
    virtual void add(const UnitPointer& , Flags ) { //добавляет юнит в класс/метод
        throw std::runtime_error( "Not supported" ); // выбрасывает исключение
    }
    virtual std::string compile( unsigned int level = 0, bool firstTab=1 ) const = 0; //формируем юнит, level - уровень вложенносьт узла дерева(для корректной расстановки отступов в начале строк)
protected:
    virtual std::string generateShift( unsigned int level ) const{ //воспроизводит табуляцию, возвращает строку, из нужного
        static const auto DEFAULT_SHIFT = "    ";
        std::string result;
        for( unsigned int i = 0; i < level; ++i ) {
            result += DEFAULT_SHIFT;
        }
        return result;
    }
};
#endif // UNIT_H
