#include <iostream>

// Function to display the menu and get operation choice
char getOperation() {
    char operation;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;
    return operation;
}

// Function to get two numbers from user
void getNumbers(double& num1, double& num2) {
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
}

// Function to perform the calculation and display result
void calculate(char operation, double num1, double num2) {
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
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            break;
    }
}

int main() {
    // Get operation from user
    char operation = getOperation();
    
    // Get operands from user
    double num1, num2;
    getNumbers(num1, num2);
    
    // Perform calculation and display result
    calculate(operation, num1, num2);

    return 0;
}
