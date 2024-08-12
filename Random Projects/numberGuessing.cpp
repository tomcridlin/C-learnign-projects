#include <iostream>
#include <ctime>
#include <string>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********** Number Guessing Game **********\n";

    do{
        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        
        tries++;

        if(guess > num){
            std::cout << "Try a lower number\n";
        }else if (guess < num){
            std::cout << "Try a higher number\n";
        }else{
            std::cout << num << " Is correct!\n" << "It took you: " << tries << " tries\n";
            std::cout << "*************************************\n";
            break;
        }
    }while(guess != num);

    return 0;
}