#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "Russian");
    double a, b, h, minY = 1e9, xMin = 0; // minY = 1e9 (заведомо большое число для старта)
    std::cout << "Введите a, b, h: ";
    std::cin >> a >> b >> h;
    if (a > b || h <= 0) return 0;

    std::cout << std::fixed << std::setprecision(4);
    for (double x = a; x <= b + 1e-9; x += h) {
        if (x + 1 < 0) { // Проверка области определения (корень из отрицательного)
            std::cout << std::setw(8) << x << " | Не определено\n";
            continue; // Пропускаем шаг
        }
        double y = std::sqrt(x + 1); // Считаем корень
        std::cout << std::setw(8) << x << " | " << std::setw(8) << y << "\n";

        if (y < minY) { minY = y; xMin = x; } // Если нашли меньше — запоминаем
    }
    std::cout << "Минимум: f(" << xMin << ") = " << minY << "\n";
}