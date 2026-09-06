#include <iostream>
#include <cstring>
void printInt(int);

int main()
{
    int n{3};
    float f{};


    std::memcpy (&f, &n, sizeof(float));
    std::cout << f << "\n";;
    printInt(23.5);
    return 0;
}

void printInt(int x)
{
    std::cout << x;
}