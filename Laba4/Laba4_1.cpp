#include <iostream>  

int main() {  // Главная функция — точка входа в программу
    std::setlocale(LC_ALL, "Russian");
    int number;  // Объявляем целочисленную переменную для хранения введённого числа

    std::cout << "Введите число от 1 до 5: ";  // Приглашение пользователю ввести число

    std::cin >> number;  // записываем число в переменную

    switch (number) {  // Оператор множественного выбора: сравниваем number со значениями ниже
    case 1:  // Если number == 1
        std::cout << "I" << std::endl;  // Выводим римскую единицу
        break;  // Выход из switch

    case 2:  
        std::cout << "II" << std::endl;  // Выводим римскую двойку
        break;  

    case 3:  
        std::cout << "III" << std::endl;  // Выводим римскую тройку
        break;  

    case 4:  
        std::cout << "IV" << std::endl;  // Выводим римскую четвёрку
        break;  

    case 5:  
        std::cout << "V" << std::endl;  // Выводим римскую пятёрку
        break;  

    default:  // Если ни один case не совпал (число вне диапазона 1-5)
        std::cout << "Ошибка: число должно быть от 1 до 5!" << std::endl;  // Сообщаем об ошибке
        break;  
    }

    return 0;
}