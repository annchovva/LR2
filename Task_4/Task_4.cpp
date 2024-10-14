#include <iostream>

int main(){
    int X, Y;
    double A, B, C, K;
    std::cout << "Введите X и Y: ";
    std::cin >> X >> Y;
    if (X == Y) {
        X = 0;
        Y = 0;
    }
    if (X < Y) { 
        X = 0;
    }
    else {
        Y = 0;
    }
    std::cout << "Введите различные A, B, C: ";
    std::cin >> A >> B >> C;
    std::cout << "Введите K: ";
    std::cin >> K;
    if (A > B && A > C) {
        A -= K;
    }
    if (B > A && B > C) {
        B -= K;
    }
    else {
        C -= K;
    }
    std::cout << "X = " << X << " Y = " << Y << " A = " << A << " B = " << B << " C = " << C << std::endl;
    return 0;
}