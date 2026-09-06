#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num)
{
    std::cout << "enter the name of person  " << num ;
    std::string name;
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view person)
{
    std::cout << "enter the age of  " << person;
    int age{};
    std::cin >> age;
    return age;
}

void comparision(std::string_view n1, std::string_view n2, int a1, int a2)
{
    if (a1 > a2)
        std::cout << n1 << " ( " << a1 << " ) is older than " << n2 << " (" << a2 << " )";

        else   
                std::cout << n2 << " ( " << a2 << " ) is older than " << n1 << " (" << a1 << " )";

            
}
int main()
{
    std::string name1 {getName(1)};
    std::string name2 {getName(2)};

    int age1{getAge(name1)};

    int age2{getAge(name2)};
    comparision(name1, name2, age1, age2);


    return 0;
}