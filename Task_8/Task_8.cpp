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
double length (double x0, double xn, double y0, double yn) {
    return sqrt((x0 - xn) * (x0 - xn) + (y0 - yn) * (y0 - yn));
}
double h (double S, double a) {
    return 2 * S / a;
}
double m (double a, double b, double c) {
    return 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
}
double b (double a, double b, double c) {
    return sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b);
}
double arcsin(double x) {
   double term = x;
   double arcsin = term;
   for(int n = 1; n < 1000; n++){
    term *= x * x * (2 * n - 1) * (2 * n - 1) / 2 / n / (2 * n + 1);
    arcsin += term;
   }
   return arcsin;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cout << "x1, y1 = ";
    std::cin >> x1 >> y1;
    std::cout << "x2, y2 = ";
    std::cin >> x2 >> y2;
    std::cout << "x3, y3 = ";
    std::cin >> x3 >> y3;

    double AB = length (x1, x2, y1, y2);
    double BC = length (x2, x3, y2, y3);
    double AC = length (x1, x3, y1, y3);
    std::cout << "AB = " << AB << std::endl;
    std::cout << "BC = " << BC << std::endl;
    std::cout << "AC = " << AC << std::endl;

    double P = AB + BC + AC;
    double p = P / 2;
    double S1 = sqrt(p * (p - AB) * (p - BC) * (p - AC));
    double S2 = fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

    double h1 = h (S1, AB); 
    double h2 = h (S1, BC);
    double h3 = h (S1, AC);
    std::cout << "Высота, проведенная к AB h1 = " << h1 << std::endl;   
    std::cout << "Высота, проведенная к BC h2 = " << h2 << std::endl;
    std::cout << "Высота, проведенная к AC h3 = " << h3 << std::endl;

    double m1 = m (AC, BC, AB);
    double m2 = m (AC, AB, BC);
    double m3 = m (AB, BC, AC);
    std::cout << "Медиана, проведенная к AB m1 = " << m1 << std::endl;
    std::cout << "Медиана, проведенная к BC m2 = " << m2 << std::endl;
    std::cout << "Медиана, проведенная к AC m3 = " << m3 << std::endl;

    double b1 = b (AB, AC, BC);
    double b2 = b (AB, BC, AC);
    double b3 = b (AC, BC, AB);
    std::cout << "Биссектриса угла A b1 = " << b1 << std::endl;
    std::cout << "Биссектриса угла B b2 = " << b2 << std::endl;
    std::cout << "Биссектриса угла C b3 = " << b3 << std::endl;

    double r = S1 / p;
    double R = (AB * BC * AC) / (4 * S1);

    const double pi =3.14159265;
    double A = arcsin(BC / (2 * R));
    double B = arcsin(AC / (2 * R));
    double C = arcsin(AB / (2 * R));
    double Ag = A * 180 / pi;
    double Bg = B * 180 / pi;
    double Cg = C * 180 / pi;
    std::cout << "Градусная мера угла A = " << A << " рад = " << Ag << " град" << std::endl;
    std::cout << "Градусная мера угла B = " << B << " рад = " << Bg << " град" << std::endl;
    std::cout << "Градусная мера угла C = " << C << " рад = " << Cg << " град" << std::endl;

    std::cout << "Радиус вписанной окружности r = " << r << std::endl;
    std::cout << "Радиус описанной окружности R = " << R << std::endl;

    double SR = pi * R * R;
    double Sr = pi * r * r;
    double CR = 2 * pi * R;
    double Cr = 2 * pi * r;

    std::cout << "Площадь вписанной окружности Sr = " << Sr << ", ее длина Cr = " << Cr << std::endl; 
    std::cout << "Площадь описанной окружности SR = " << SR << ", ее длина CR = " << CR << std::endl;

    std::cout << "Площадь треугольника через формулу Герона S1 = " << S1 << std::endl; 
    std::cout << "Площадь треугольника через координаты S2 = " << S2 << std::endl; 
    double S3 = 0.5 * AB * BC * (AC / (2 * R));
    std::cout << "Площадь треугольника через две стороны и угол между ними S3 = " << S3 << std::endl;
    return 0;
}
