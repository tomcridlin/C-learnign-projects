#include<iostream>

int main(){


    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.length() << "\n"; //gives length of string
    std::cout << name.empty() << "\n"; //checks to see if string is empty
    //name.clear; clears string
    std::cout << name.append("@gmail.com \n"); //adds to the string at the end
    std::cout << name.at(1) << "\n"; //gives character at given index
    std::cout << name.insert(0, "@"); //picks a position and inserts string does not replace existing char
    std::cout << name.find(' ') << "\n"; //finds the position of the given char
    name.erase(0, 3); //eliminates characters between two positions
    return 0;
}