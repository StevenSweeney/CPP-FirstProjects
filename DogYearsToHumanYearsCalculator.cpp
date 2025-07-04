#include <iostream>

int main() {

    int dogYears;
    double humanYears;

    std::cout << "Dog years to human years converter\n";

    std::cout << "Enter the dog's age in dog years: ";
    std::cin >> dogYears;

    if (dogYears <= 2) {
        humanYears = dogYears * 10.5;
    } else {
        humanYears = ((dogYears - 2) * 4) + 21;
    }
    std::cout << "\n";
    std::cout << "Your dog is about " << humanYears << " years old in human years!\n";
}