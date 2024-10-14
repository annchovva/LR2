#include <iostream>

int main() {
    int h1, min1, h2, min2;
    std::cout << "Введите начальное время(часы и минуты): ";
    std::cin >> h1 >> min1;
    std::cout << "Введите конечное время(часы и минуты): ";
    std::cin >> h2 >> min2;
    int time1 = h1 * 60 + min1;
    int time2 = h2 * 60 + min2;
    int time = time2 - time1;
    int hours = time / 60;
    int minutes = time % 60;
    std::cout << "Студент решал задачи " << hours << " часов и " << minutes << " минут" << std::endl;
    return 0;
}