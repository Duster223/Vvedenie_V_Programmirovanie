#include <iostream>
#include <string>
#include <cctype>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    int vowels = 0, consonants = 0, digits = 0;

    // Посимвольный обход строки
    for (char c : text) {
        if (isalpha(c)) { // Если это буква
            char lower = tolower(c); // Приводим к нижнему регистру
            // Проверяем на гласные (английские и русские)
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u' ||
                lower == 'а' || lower == 'е' || lower == 'ё' || lower == 'и' || lower == 'о' ||
                lower == 'у' || lower == 'ы' || lower == 'э' || lower == 'ю' || lower == 'я') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
        else if (isdigit(c)) { // Если это цифра
            digits++;
        }
    }

    cout << "Гласных: " << vowels << "\n";
    cout << "Согласных: " << consonants << "\n";
    cout << "Цифр: " << digits << "\n";

    return 0;
}
