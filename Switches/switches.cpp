#include <iostream>

int main(){


    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    switch (age)
    {
    case 1:
        std::cout << "You are one year old";
        break;
    case 2:
        std::cout << "You are two years old";
        break;
    case 3:
        std::cout << "You are three years old";
        break;
    
    default:
        std::cout << "Please enter only numbers 1-3";
        break;
    }

    return 0;
}