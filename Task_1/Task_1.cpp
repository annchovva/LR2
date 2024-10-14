#include <iostream>

int main() {
    double x, x2, res1, res2;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    x2 = x * x;
    res1 = x * (23 * x2 + 32);
    res2 = 69 * x2 + 8;
    std::cout << "23x^3 + 69x^2 + 32x + 8 = " << res1 + res2 << std::endl;
    std::cout << "- 23x^3 + 69x^2 - 32x + 8 = " << res2 - res1 << std::endl;
    return 0;
}