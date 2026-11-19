#include <iostream>
#include <clocale>
using namespace std;

// Прототипы функций
void fillArray(int arr[], int size);
void printArray(const int arr[], int size);
void findMinMax(const int arr[], int size, int& minVal, int& maxVal);

int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 5;
    int numbers[SIZE];
    int minVal, maxVal; // Сюда функции запишут результат по ссылке

    cout << "Введите " << SIZE << " чисел:\n";
    fillArray(numbers, SIZE); // Вызов ввода

    cout << "Ваш массив: ";
    printArray(numbers, SIZE); // Вызов вывода

    findMinMax(numbers, SIZE, minVal, maxVal); // Поиск min и max

    cout << "Минимум: " << minVal << "\n";
    cout << "Максимум: " << maxVal << "\n";

    return 0;
}

// Функция ввода (массив передается как указатель, поэтому меняется исходный)
void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Функция вывода (массив константный, чтобы случайно не изменить)
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Функция поиска (minVal и maxVal передаются по ссылке &, чтобы вернуть 2 значения)
void findMinMax(const int arr[], int size, int& minVal, int& maxVal) {
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}