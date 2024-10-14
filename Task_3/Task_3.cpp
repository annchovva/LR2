#include <iostream>

int main() {
    double b1, q, n, S;
    std::cout << "Введите первый член геометрической прогрессии: ";
    std::cin >> b1;
    n = 7.0;
    q = 1.0 / (1 + n);
    S = b1 / (1 - q);
    std::cout << "Сумма всех членов бесконечно убывающей геометрической прогрессии: " << S << std::endl;
    return 0;
}