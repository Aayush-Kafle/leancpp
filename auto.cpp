
#include <iostream>

int add (int x, int y){
    return x+y;
}

int main()
{
    auto d{5.0}; // d is deduced as double
    auto i{1+2}; // deducd as int

    auto sum {add(5,7)};// add() returns int, so auto will dedduce sum as an int
    std::cout << sum;
    return 0;
}