#include <iostream>

class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int add() {
        return num1 + num2;
    }
};

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Calculator calculator(num1, num2);
    int result = calculator.add();

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
