#include <iostream>

namespace Constants{
    constexpr double gravity {9.8};
} 


int getHeightUser()
{
    std::cout << "print the height of the towr";
    int height;
    std::cin >> height;
    return height;
}

int getRequiredTime(){
    std::cout << "print the time you want to see from";
    int time;
    std::cin >> time;
    return time;
}

int calculateDistanceFallen(int time, int height)
{
    int distance_fallen {Constants::gravity * time * time /2};
    int ans_height {height - distance_fallen};
    return ans_height;

}

void printHeight(int time)
{
    int height {calculateDistanceFallen(time, height)};

    for (int i = time; i>0; i-- )
    {
        std::cout << "At " << time << " the ball is at height " << calculateDistanceFallen(time, height);
    }
}

int main()
{
    int height {getHeightUser()};
    int time {getRequiredTime()};



    return 0;
}