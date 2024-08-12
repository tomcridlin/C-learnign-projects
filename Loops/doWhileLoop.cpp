#include <iostream>

int main(){


    //Do while loop runs the code in the while loop 1 time without checking the condition later specified
    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is: " << number;

    return 0;
}