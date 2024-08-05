#include <iostream>

int main(){


    // int grade;

    // std::cout << "Enter your grade: ";
    // std::cin >> grade;

    // (grade >= 60) ? std::cout << "You pass!" : std::cout << "You failed";

    int number;
    std::cout << "Enter your numer: ";
    std::cin >> number;
    number = number % 2;
    
    (number == 0) ? std::cout << "The number entered is even" : std::cout << "The number entered is odd";

    return 0;
}