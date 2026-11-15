#include <iostream> 
#include <clocale> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 10;          // Размер массива
    int sps[size];                // Объявление массива
    int sum = 0;                  // Переменная для суммы

    cout << "Введите " << size << " чисел:\n";

    // Ввод чисел с клавиатуры
    for (int i = 0; i < size; i++) {
        cin >> sps[i];
    }

    // Поиск суммы на нечетных индексах (1, 3, 5, 7, 9)
    for (int i = 1; i < size; i += 2) {
        sum += sps[i];
    }

    cout << "Сумма на нечётных индексах: " << sum << "\n";
    return 0;
}