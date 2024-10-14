#include <iostream>
#include <cmath>

int main() {
    double c, d, x, z;
    std::cout << "Введите значение c: ";
    std::cin >> c;
    std::cout << "Введите значение d: ";
    std::cin >> d;
    std::cout << "Введите значение z: ";
    std::cin >> z;
    if (z < 0) {
        x = pow(z, 2) - z;
    } else {
        x = pow(z, 3);
    }
    std::cout << "x = " << x << std::endl;

    int N;
    double f;
    std::cout << "Выберете функцию f(x): 1.f(x)=2x 2.f(x)=x^3 3.f(x)=x/3" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> N;
    switch(N) {
        case 1:
            f = 2 * x;
            break;
        case 2:
            f = pow(x, 3);
            break;
        case 3:
            f = x / 3;
            break;    
    }
    std::cout << "Выбранная функция f(x) = " << f << std::endl;
    double result;
    result = pow(sin((c * f) + pow(d, 2) + pow(x ,2)), 3);
    std::cout << "y = " << result << std::endl;

    return 0;
}