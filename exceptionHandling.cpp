#include <iostream>
#include <stdexcept>

// Function to perform division
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero error");
    }
    return numerator / denominator;
}

int main() {
    double num, denom;
    std::cout << "Enter numerator: ";
    std::cin >> num;
    std::cout << "Enter denominator: ";
    std::cin >> denom;

    try {
        // Attempt to perform division
        double result = divide(num, denom);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        // Handle the exception
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
