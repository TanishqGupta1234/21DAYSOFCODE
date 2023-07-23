#include <iostream>
#include <iomanip>

int main() {
    int number;

    // Get input from the user
    std::cout << "Enter a number to generate its multiplication table (up to 10): ";
    std::cin >> number;

    // Check if the input is valid
    if (number <= 0) {
        std::cerr << "Error: Please enter a positive non-zero number.\n";
        return 1;
    }

    // Display the multiplication table
    std::cout << "Multiplication table of " << number << ":\n";
    std::cout << "-----------------------------\n";

    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(2) << i << " * " << std::setw(2) << number << " = " << std::setw(3) << i * number << "\n";
    }

    return 0;
}
