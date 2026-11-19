#include <iostream>
#include <clocale>
using namespace std;

// Прототипы
int factorial(int n);
bool isPrime(int n);

int main() {
    setlocale(LC_ALL, "Russian");
    int num;

    cout << "Введите число: ";
    cin >> num;

    // Вызов рекурсивной функции
    cout << "Факториал " << num << " = " << factorial(num) << "\n";

    // Вызов логической функции
    if (isPrime(num)) {
        cout << num << " — простое число.\n";
    }
    else {
        cout << num << " — составное число (или 0/1).\n";
    }

    return 0;
}

// РЕКУРСИВНАЯ функция факториала (вызывает саму себя)
int factorial(int n) {
    if (n <= 1) { // Базовый случай (условие выхода)
        return 1;
    }
    return n * factorial(n - 1); // Рекурсивный вызов
}

// Функция проверки на простое число
bool isPrime(int n) {
    if (n <= 1) return false; // 0 и 1 не простые
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // Нашелся делитель
    }
    return true; // Делителей нет
}