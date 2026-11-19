#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int N = 6;
    int mat[N][N];
    int delCol;

    srand(42);
    cout << "Исходная матрица 6x6:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = -50 + rand() % 101; // От -50 до 50
            cout << setw(4) << mat[i][j];
        }
        cout << "\n";
    }

    cout << "Введите номер столбца для удаления (от 0 до 5): ";
    cin >> delCol;

    // Сдвиг элементов влево для удаления столбца
    for (int i = 0; i < N; i++) {
        for (int j = delCol; j < N - 1; j++) {
            mat[i][j] = mat[i][j + 1]; // Сдвигаем элементы влево
        }
    }

    // Вывод измененной матрицы (выводим N-1 столбцов)
    cout << "\nМатрица после удаления столбца " << delCol << ":\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            cout << setw(4) << mat[i][j];
        }
        cout << "\n";
    }
    return 0;
}