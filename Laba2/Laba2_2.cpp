#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::setlocale(LC_ALL, "Russian");
    std::cout << std::fixed << std::setprecision(2);

    double first = 0.0, second = 0.0;   // исходные числа

    std::cout << "Введите первое число: ";
    std::cin >> first;
    if (first < 0 || std::cin.fail()) {                                     // Проверка корректности
        return 0;
    }

    std::cout << "Введите второе число: ";
    std::cin >> second;
    if (second < 0 || std::cin.fail()) {                                     // Проверка корректности
        return 0;
    }

    double arifm = static_cast<double>(first + second) / 2.0;              // явное среднее арифметическое
    double geomet = std::sqrt(static_cast<double>(first * second));          // вычисляем среднее геометрическое

    std::cout << "Среднее арифметическое: " << arifm << std::endl;
    std::cout << "Среднее геометрическое: " << geomet << std::endl;

    return 0;
}
