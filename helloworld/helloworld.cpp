#include <iostream>
#include <vector>
#include <string>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{
    int x = 0;

    std::cout << first::x;

    return 0;

    //Namespaces allow you to have multiple variables named the same thing but by changing the prefex
    // you can also change the output 

}