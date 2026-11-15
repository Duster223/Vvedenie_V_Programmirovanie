#include <iostream> 
#include <cstdlib> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(42);                    // Фиксированное зерно для генератора
    int arr[30];                  // Исходный массив
    int size = 0;                 // Фактический размер нового массива
    cout << "Исходный массив: ";

    for (int i = 0; i < 30; i++) {
        int num = rand() % 101;   // Случайное число от 0 до 100
        cout << num << " ";

        if (num != 0) {           // Если число не ноль
            arr[size] = num;      // Записываем его в массив
            size++;               // Увеличиваем размер
        }
    }

    cout << "\nБез нулей: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}