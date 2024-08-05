#include <iostream>
#include <cmath>

int main(){

    double x = 3.14;
    double y = 4;
    double max;
    double min;
    double power;
    double root;
    double positive;
    double rounded;

    max = std::max(x,y); //finds max of two values
    min = std::min(x,y); //finds minimum
    power = pow(2, 3);
    root = sqrt(9);
    positive = abs(-6);
    rounded = round(x); // can use floor() to round down and ceil() to round up
    

    std::cout << rounded;
    
    
    return 0;
}