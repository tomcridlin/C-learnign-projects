#include<iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***************Calculator************* \n";

    std::cout << "Please enter an operations (+, -, * or /) \n";
    std::cin >> op;

    std::cout << "Please enter your first number \n";
    std::cin >> num1;

    std::cout << "Please enter your second number \n";
    std::cin >> num2;

    switch (op){
        case '+':
            result = num1 + num2;
            std::cout << "Your result of " << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Your result of " << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Your result of " << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Your result of " << num1 << " " << op << " " << num2 << " = " << result << "\n";
            break;
        default:
            std::cout << "Please enter a valid operand \n";
            return 0;
    }

    std::cout << "**************************************";


    return 0;
}