#include <iostream>

int main() {
int a, b;
   std::cout << "Введите значение a = ";
   std::cin >> a;
   std::cout << "Введите значение b = ";
   std::cin >> b;
   std::cout << "a = " << a << " " << " b = " << b << std::endl;
   int step = 1;
   while (b != 0) {
      int term = a % b;
      a = b; 
      b = term;
      std::cout << "Шаг " << step << ": a = " << a << " " << " b = " << b << std::endl;
      step++;
   }
    return 0;
 }