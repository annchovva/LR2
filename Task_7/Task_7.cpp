#include <iostream>

int main() {
    double a, b, c, res;
    int N;
    a = -13.8;
    b = 8.9;
    c = 25.0;
    std::cout << "Введите N: ";
    std::cin >> N;
    switch (N) {
        case 2:
            res = b * c - a * a;
            std::cout << res << std::endl;
            break;
        case 56:
            res = b * c;
            std::cout << res << std::endl;
            break;   
        case 7:
            res = a * a * a * a * a * a * a + c;
            std::cout << res << std::endl;
            break;  
        case 3:
            res = a - b * c;
            std::cout << res << std::endl;
            break;  
        default:
            res = (a + b) * (a + b) * (a + b);
            std::cout << res << std::endl;
            break;              
    
    }
}