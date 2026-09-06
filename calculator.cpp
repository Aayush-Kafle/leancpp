#include <iostream>
using namespace std;

double userInput()
{
    double input;
    cout << "enter a number ";
    cin >> input;
    return input;
}

char character()
{
    char ch;
    cout << "please enter a character ";
    cin >> ch;
    return ch;
}


double add(double x, double y)
{
    return x+y;
}

double sub(double x, double y){
    return x-y;
}

double multiply(double x, double y){
    return x*y;
}

double divide(double x, double y)
{
    return x/y;
}

int main()
{
    double x{userInput()};
    double y{userInput()};

    char charac = character();

    if (charac == '+')
        cout << x << charac << y << " is " << add(x,y);
    
    else if (charac == '-')
        cout << x << charac << y << " is " << sub(x,y);
    
    else if  (charac == '*')
        cout << x << charac << y << " is " << multiply(x,y);

    else if (charac == '/')
        cout << x << charac << y << " is " << divide (x,y);
    
    else
    

    return 0;
}