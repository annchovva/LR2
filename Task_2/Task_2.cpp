#include <iostream>

int main() {
    double x, y, z;
    std::cout << "Введите длины сторон треугольника x, y, z: ";
    std::cin >> x >> y >> z;
    if (x > 0 && y > 0 && z > 0 && x + y > z && x + z > y && y + z > x) {
        std::cout << "Треугольник существует." << std::endl;
    } else {
        std::cout << "Треугольник не существует." << std ::endl;
    }
    return 0;
}    