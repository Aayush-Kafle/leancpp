#include <iostream>


template <int N> // declare a non type template parameter of type int named N

void print()
{
    std::cout << N << '\n';
}

template <int N>
constexpr int factorial()
{
    static_assert(N>=0)

    int product{1};
    for (int i{1}; i<=N; ++i)
    {
        product *=i;
        return product;
    }
}
int main()
{
    print<5>();
    static_assert(factorial<1>()==1);
    return 0;
}