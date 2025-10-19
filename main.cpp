#include <iostream>

int main() {
    // Variables to store user input
    char operation;
    double num1, num2;

    // Get the operation from user
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    // Get two numbers from user
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform calculation based on the operation
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        
        default:
            // Handle invalid operators
            std::cout << "Error: Invalid operator!" << std::endl;
    }

    return 0;
}
