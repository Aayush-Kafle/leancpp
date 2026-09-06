#include <iostream>
// we can create multiple functions with the same name, as long as they have diff parameter types
//overloading based on the number of parameters
int add(int x, int y, int z)
{
    return x+y+z;
}
 double add(double x, double y)
 {
    return x+y;
 }

 int add (int x, int y)

 {
    return x + y;
 }

int main()
{
    std::cout << add(4,5);
    std::cout << '\n';
    std::cout << add(1.1,3.8);
    std::cout << '\n';
    std::cout << add(3,2,1);

    return 0;
}