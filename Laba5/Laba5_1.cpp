#include <iostream> 
#include <iomanip> //setw

int main() {
    std::setlocale(LC_ALL, "Russian");
    double a, b, h;                   // Начало Конец Шаг
    std::cout << "Введите a, b, h: ";
    std::cin >> a >> b >> h;

    if (a > b || h <= 0) return 0; // Защита

    std::cout << std::fixed << std::setprecision(3); // Знаки после запятой
    for (double x = a; x <= b + 1e-9; x += h) {      // 1e-9 защищает от потери последней точки
        std::cout << std::setw(8) << x << " | " << std::setw(8) << (-3 * x + 10) << "\n";
    }
}
