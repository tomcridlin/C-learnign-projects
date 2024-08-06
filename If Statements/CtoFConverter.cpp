#include <iostream>

int main(){

    char op;
    int value;
    int result;

    std::cout << "*****Converter between C and F***** \n";

    std::cout << "Is your value in C or F? ";
    std::cin >> op;

    std::cout << "What is your value? ";
    std::cin >> value;


    if(op == 'C' || op == 'c'){
        result = (value * 9/5) + 32;
    }
    else if(op =='F' || op == 'f'){
        result = (value - 32) * 5/9;
    }
    else{
        std::cout << "Please only enter C or F";
    }

    std::cout << value << op << " = " << result;
    std::cout << "\n ***********************************";

    return 0;
}