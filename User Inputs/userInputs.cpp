#include <iostream>

using text_t = std::string;

int main(){

    text_t name;
    int age;


    std::cout << "What is your name?: ";
    // Will stop reading if space is found in input unless getline() is used
    //std::cin >> name;
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}