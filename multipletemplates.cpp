#include <iostream>

template <typename T>
T max (T x, T y)
{
    return (x<y)?y:x;
}

template <typename T, typename U>
auto maxa(T x, U y)
{
    return (x<y)?y:x;
}

int main()
{
    std::cout << max(static_cast<double>(33),32.3);
    std::cout << maxa(23.2,29.8);
    return 0;
}

