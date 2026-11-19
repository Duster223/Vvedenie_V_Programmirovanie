#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int R = 4, C = 6;
    int mat[R][C];
    int a, b, count = 0;

    cout << "Введите границы интервала a и b: ";
    cin >> a >> b;

    srand(42); // Фиксированные случайные числа
    cout << "Матрица:\n";

    // Заполнение и проверка
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            mat[i][j] = -50 + rand() % 101; // От -50 до 50
            cout << setw(4) << mat[i][j];

            // Если число попадает в интервал [a, b]
            if (mat[i][j] >= a && mat[i][j] <= b) {
                count++;
            }
        }
        cout << "\n";
    }

    cout << "Количество элементов в интервале [" << a << ", " << b << "]: " << count << "\n";
    return 0;
}