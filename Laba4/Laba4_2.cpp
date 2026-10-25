#include <iostream>  

int main() {
    std::setlocale(LC_ALL,"Russian");

    int month;  // Переменная для номера месяца (1-12)

    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;

    switch (month) {  // Множественный выбор по номеру месяца
    case 12:  // Декабрь
    case 1:   // Январь
    case 2:   // Февраль
        // Группировка, тк надо вывести время года

        std::cout << "Зима, ";  // Время года
        if (month == 2)  // Февраль — 28
            std::cout << "28 дней" << std::endl;  // 28 дней (хотя иногда и 29, но ладно)
        else
            std::cout << "31 день" << std::endl;  // Декабрь и январь 31 день
        break;  // Выход из switch 

    case 3:   // Март
    case 4:   // Апрель
    case 5:   // Май
        
        std::cout << "Весна, ";  // Пункт 1: пора года
        if (month == 4)  // Апрель
            std::cout << "30 дней" << std::endl;  // В апреле 30 дней
        else
            std::cout << "31 день" << std::endl;  // Март и май 31 день
        break; 

    case 6:   // Июнь
    case 7:   // Июль
    case 8:   // Август
        
        std::cout << "Лето, ";  
        if (month == 6)  // Июнь
            std::cout << "30 дней" << std::endl;  // В июне 30 дней
        else
            std::cout << "31 день" << std::endl;  // Июль и август — по 31 дню
        break;  

    case 9:   // Сентябрь
    case 10:  // Октябрь
    case 11:  // Ноябрь

        std::cout << "Осень, ";  
        if (month == 11)  // Ноябрь
            std::cout << "30 дней" << std::endl;  // В ноябре 30 дней
        else
            std::cout << "31 день" << std::endl;  // Сентябрь и октябрь 31 день
        break;  

    default:  // Если номер месяца вне диапазона 1-12
        std::cout << "месяц должен быть от 1 до 12!" << std::endl;  // Сообщение об ошибке
        break;  
    }

    return 0; 
}