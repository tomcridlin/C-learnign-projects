#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int num1 = (rand() % 20) + 1; // example of 20 sided dice
    int num2 = (rand() % 6) + 1; // example of 6 sided dice
    int num3 = (rand() % 10) + 1; // example of 10 sided dice

    std::cout << num1 << '\n';
    std::cout << num2 <<'\n';
    std::cout << num3 <<'\n';

    return 0;
}