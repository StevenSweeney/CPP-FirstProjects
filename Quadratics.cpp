#include <iostream>
#include <cmath>

int main() {
  
  double a = 0;
  double b = 0;
  double c = 0;

  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "\n";

  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "\n";

  std::cout << "Enter c: ";
  std::cin >> c;
  std::cout << "\n";

  double root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
  double root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

  std::cout << "Root 1 is " << root1 << "\nRoot2 is " << root2 << "\n";
  
}