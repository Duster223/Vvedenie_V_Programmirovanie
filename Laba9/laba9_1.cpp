#include <iostream>
#include <clocale>
using namespace std;

// Прототипы функций (объявляем до main)
double getArea(double a, double b);
double getPerimeter(double a, double b);

int main() {
    setlocale(LC_ALL, "Russian");
    double sideA, sideB;

    cout << "Введите стороны прямоугольника a и b: ";
    cin >> sideA >> sideB;

    // Вызов функций
    double area = getArea(sideA, sideB);
    double perim = getPerimeter(sideA, sideB);

    cout << "Площадь: " << area << "\n";
    cout << "Периметр: " << perim << "\n";
    return 0;
}

// Определение функции площади (передача по значению)
double getArea(double a, double b) {
    return a * b;
}

// Определение функции периметра
double getPerimeter(double a, double b) {
    return 2 * (a + b);
}