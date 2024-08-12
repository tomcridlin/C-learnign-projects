#include <iostream>

int main(){

    int rows = 0;
    int columns = 0;

    std::cout << "Please enter the amount of rows: ";
    std::cin >> rows;
    
    std::cout << "Please enter the amount of columns: ";
    std::cin >> columns;

    
    for(int i = 1; i <= rows; i++) {
        std::cout << '|';
        for(int j = 1; j <= columns; j++){
            if(i == 1 || i == rows){
                std::cout << '-';
            }else {
                std::cout << ' ';
            }
            
        }   
        std::cout << '|' << '\n';
    }

    return 0;
}