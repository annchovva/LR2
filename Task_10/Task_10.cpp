#include <iostream>

double fabs(double x) {
    return x >= 0 ? x : -x;
}

double sqrt(double x) {
    double eps = 1e-10;
    double result = x;
    double xk = 0;
    while (fabs(result - xk) > eps) {
        xk = result;
        result = (xk + (x / xk)) / 2;
    }
    return result;
}

int main() {
    double x1, y1, x2, y2, r, R;
    std::cout << "Введите координаты центра первого круга M1(x1,y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите длину радиуса первого круга r = ";
    std::cin >> r;
    std::cout << "Введите координаты центра второго круга M2(x2,y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Введите длину радиуса второго круга R = ";
    std::cin >> R;
    double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    if (distance <= R - r) {
        std::cout << "Да, круг М1 попадает в круг М2." << std::endl;
    }
    else if (distance <= r - R) {
        std::cout << "Да, но справедливо обратное для фигур (круг М2 попадает в круг М1)." << std::endl;
    } 
    else if (distance < R + r) {
        std::cout << "Круги пересекаются." << std::endl;
    } else {
        std::cout << "Ни одно условие не выполняется.";
    }
    
    return 0;
}