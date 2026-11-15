#include <iostream> 
#include <cstdlib> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(42);                    // Фиксированное зерно для генератора
    int count = 0;                // Счетчик квадратов
    cout << "Массив: ";

    for (int i = 0; i < 20; i++) {
        int num = -99 + rand() % 199; // Случайное число от -99 до 99
        cout << num << " ";

        // Проверка на точный квадрат
        if (num == 1 || num == 4 || num == 9 || num == 16 || num == 25 ||
            num == 36 || num == 49 || num == 64 || num == 81) {
            count++;
        }
    }
    cout << "\nКоличество точных квадратов: " << count << "\n";
    return 0;
}