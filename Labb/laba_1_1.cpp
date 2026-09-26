
#include <iostream> //  Подключаем библиотеку для ввода/вывода
using namespace std;

int main()          // Объявляем главную функцию
{
    setlocale(LC_ALL, "Russian");     // Устанавливаем русский язык
    double dlina;                      // Объявляем вещественную переменную длины
    double shirina;                    // Объявляем вещественную переменную ширины
    double area;                        // Объявляем вещественную переменную площади

    std::cout << "Введите длину: \n";    // Вывод информации на экран
    std::cin >> dlina;                  // Ввод информации с клавиатуры
    if (dlina<0 || cin.fail()) {         // Проверка корректности
        return 0;
    }

    std::cout << "Введите ширину: \n";    // Вывод информации на экран
    std::cin >> shirina;                // Ввод информации с клавиатуры
    if (shirina < 0 || cin.fail()) {    // Проверка корректности
        return 0;
    }

    area = dlina * shirina;
    std::cout << "_______________________"<< std::endl;
    std::cout << "Длина: " << dlina << std::endl;
    std::cout << "Ширина: " << shirina << std::endl;

    std::cout << "Площадь: " << area << std::endl; // Подсчёт и вывод результата
    std::cout << "_______________________" << std::endl;
    return 0;
}
