#include <iostream>

int main()
{
    std::setlocale(LC_ALL, "Russian")
        // Переменные для сторон треугольника
        // Используем double, т.к. стороны могут быть дробными
    double a;
    double b;
    double c;

    std::cout << "Введите три стороны треугольника: ";
    std::cin >> a >> b >> c;

    // Проверка на ошибку ввода
    if (std::cin.fail())
    {
        return 1;
    }

    // Проверяем, что каждая сторона меньше суммы двух других
    // Используем логический оператор && (ну и)
    if (a + b > c && a + c > b && b + c > a)
        std::cout << "Существует";
    else
        std::cout << "Не существует";

    return 0;
}