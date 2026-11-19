#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int R = 3; // Количество строк
    const int C = 3; // Количество столбцов
    int mat[R][C];
    int sum = 0;

    srand(42); // Фиксированное зерно для случайных чисел
    cout << "Матрица 3x3:\n";

    // Заполнение и вывод
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            mat[i][j] = 10 + rand() % 90; // Случайное от 10 до 99
            cout << setw(4) << mat[i][j]; // Красивый вывод
            sum += mat[i][j];             // Сразу считаем сумму
        }
        cout << "\n";
    }

    // Среднее арифметическое (приводим к double, чтобы не было целочисленного деления)
    double avg = (double)sum / (R * C);
    cout << "Среднее арифметическое: " << avg << "\n";
    return 0;
}