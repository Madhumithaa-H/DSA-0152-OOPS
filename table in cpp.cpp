#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }

    return 0;
}
