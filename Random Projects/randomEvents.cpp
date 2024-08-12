#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randNum = (rand() % 5) + 1;


    switch (randNum){
        case 1: std::cout << "You win nothing";
            break;
        case 2: std::cout << "You win a hat";
            break;
        case 3: std::cout << "You win glasses";
            break;
        case 4: std::cout << "You win lunch";
            break;
        case 5: std::cout << "You win a car";
            break;
    }
    return 0;
}