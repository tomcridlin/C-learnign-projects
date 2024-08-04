#include <iostream>
#include <vector>

//typedef gives the long vector variable type a new name called parilist_t so that it can be called easily
//typedef std::vector<std::pair<std::string, int>> pairlist_t;

//typedef std::string text_t;
//typedef int number_t;

//Using can also be used instead of Typedef
using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Tom";
    number_t age = 23;

    std::cout << firstName << '\n' << age << '\n';
    return 0;
}