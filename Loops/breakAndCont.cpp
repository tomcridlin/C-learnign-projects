#include <iostream>

int main(){

    //break = break out of loop
    //continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        
        if(i == 13){
            break;
        }
        std::cout << i << '\n';
    }
    return 0;
}