#include <iostream>

void happyBirthday(std::string name, int age); //this is needed so that functions can be declared after main

int main(){

    std::string name = "Tom";
    int age = 24;
    happyBirthday(name , age);

    return 0;
}

void happyBirthday(std::string birthdayName, int age){

    std::cout << "Happy Birthday to " << birthdayName << '\n';
    std::cout << "Happy Birthday to " << birthdayName << '\n';
    std::cout << "Happy Birthday dear " << birthdayName << '\n';
    std::cout << "Happy Birthday to " << birthdayName << '\n';
    std::cout << "You are " << age << " years old";

}