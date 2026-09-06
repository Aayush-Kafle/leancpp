#include <string>
#include <iostream>
int main()
{
    std::cout << "enter a string ";
    std::string word;

    std::getline(std::cin >> std::ws, word);

    if (word.length() < 5)
        std::cout << "string is empty";

    std::string name {"Aayush"};
    std::cout << name;
}
