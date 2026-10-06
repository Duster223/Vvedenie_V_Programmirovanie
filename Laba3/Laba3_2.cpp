#include <iostream>
using namespace std;

int main()
{
    std::setlocale(LC_ALL, "Russian");
    // Переменные для сторон треугольника
    // Используем double, т.к. стороны могут быть дробными
    double a, b, c;

    cout << "Введите три стороны треугольника: ";
    cin >> a >> b >> c;

    // Проверка на ошибку ввода
    if (cin.fail())
    {
        return 1;
    }

    // Проверяем, что каждая сторона меньше суммы двух других
    // Используем логический оператор && (И)
    if (a + b > c && a + c > b && b + c > a)
        cout << "Существует";
    else
        cout << "Не существует";

    return 0;
}