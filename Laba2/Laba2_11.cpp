#include <iostream>

int main() {
    std::setlocale(LC_ALL, "Russian");
    // Используем тип double, так как стороны могут быть дробными.
    // Тип int подходит только для целых чисел, а double позволяет хранить числа с плавающей точкой.
    double dlina = 0.0;
    double shirina = 0.0;

    std::cout << "Введите длину первой стороны: ";
    std::cin >> dlina;
    if (dlina < 0 || std::cin.fail()) {                                     // Проверка корректности
        return 0;
    }

    std::cout << "Введите длину второй стороны: ";
    std::cin >> shirina;
    if (shirina < 0 || std::cin.fail()) {                                     // Проверка корректности
        return 0;
    }

    // Вычисляем периметр по формуле: P = 2 * (a + b)
    double perimeter = 2.0 * (dlina + shirina);

    // Выводим результат на экран
    std::cout << "Периметр прямоугольника равен: " << perimeter << std::endl;

    return 0;
}
