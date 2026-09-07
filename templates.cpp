#include <iostream>
template <typename T>// template parameter declaration


int max (int x, int y)
{
    // int version of the max version, it can only calculate the max of 2 integer arguments
    return (x<y)?y:x;
}

template <typename T>// template parameter declaration (should be immediately before the template function)


T max (T x, T y)
{
    return (x<y)?y:x;
}
template <typename T>

T someFcn(T x )
{
    return x;

}

template <>
const char* someFcn (const char*x) = delete; // compile errors the instation of this function with const char*

int main()
{
    std::cout << max<double>(3.2, 4.5);// instantiates and calls function max<int>(double, double)
    std::cout << max<int>(3,2);
    std::cout << max<double>(3,2);

    std::cout << someFcn(5);
    std::cout << someFcn(3.2);
    std::cout << someFcn <const char*>("hello");


    return 0;
}