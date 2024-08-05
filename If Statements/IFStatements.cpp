#include <iostream>

int main(){


    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age > 60){
        std::cout << "I dont want to break your hip!";
    }
    else if(age >= 18 ){
        std::cout << "Smash";
    }
    else if(age <=  0){
        std::cout << "You havent even been born yet!";
    }
    else{
        std::cout << "Please go away child";
    }

    return 0;
}