#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "Russian");
    double a, b, h;
    std::cout << "Введите a, b, h: ";

    // Защита от ввода букв (cin.fail)
    while (!(std::cin >> a >> b >> h)) {
        std::cin.clear(); // Сбрасываем ошибку
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Чистим буфер
        std::cout << "Ошибка! Введите 3 числа: ";
    }
    if (a > b || h <= 0) return 0;

    std::cout << std::fixed << std::setprecision(6);
    for (double x = a; x <= b + 1e-9; x += h) {
        double stdY = std::sqrt(x + 1); // Эталон из библиотеки
        double sum = 1.0, term = 1.0;   // sum — сумма, term — текущий член ряда
        int n = 1, steps = 0;           // n — для формулы, steps — счетчик

        do {
            // Рекуррентная формула: каждый новый член через предыдущий (без факториалов)
            term = term * x * (3.0 - 2.0 * n) / (2.0 * n);
            sum += term;
            n++; steps++;
        } while (std::abs(term) > 1e-6); // Считаем, пока член больше 10^-6

        std::cout << std::setw(6) << x << " | " << std::setw(8) << stdY
            << " | " << std::setw(8) << sum << " | " << std::setw(8)
            << std::abs(stdY - sum) << " | " << steps << " шагов\n"; // Вывод: x, эталон, ряд, погрешность, шаги
    }
}