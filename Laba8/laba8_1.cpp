#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string line;

    cout << "Введите строку: ";
    // Используем getline, чтобы прочитать строку вместе с пробелами
    getline(cin, line);

    cout << "Длина строки: " << line.length() << " символов\n";

    // Проверяем, что строка не пустая, чтобы не выйти за границы
    if (line.empty()) {
        cout << "Первый символ: " << line[0] << "\n";
        cout << "Последний символ: " << line[line.length() - 1] << "\n";
    }
    else {
        cout << "Строка пустая!\n";
    }

    return 0;
}
