#include <iostream>
#include <string>

int getName(){
    std::cout << "Enter your full name ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    int length = name.length();
    return length;


}

int age(){
    std::cout << "your age";
    int age;
    std::cin >> age;
    return age;
}

int main()
{
    int length{ static_cast<int>(getName())};

    
    int a = age();

    std::cout << "your age + length of your name is " << length + a;
    return 0;


}