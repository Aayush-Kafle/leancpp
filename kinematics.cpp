#include <iostream>
#define g (9.8)

double height()
{
    double height;
    std::cout << "enter the height of the towers in metres ";
    std::cin >> height;
    return height;
}

double final_height(double h, double x)
{
    double distance_fallen = g * (x) * (x)/2;
    if (h-distance_fallen < 0)
        return 0;
    else

    return h-distance_fallen;

    
}

int main()
{
    double t;
   double h{height()};
   std::cout << "we assume the ball has no initial velocity \n";
   std::cout << " time ";
   std::cin >> t;
   if (t == 0)
        std::cout << "ball is at " << h;
    
    else 
        std::cout << "the final height after" << t << " is " << final_height(h,t);

    return 0;
}