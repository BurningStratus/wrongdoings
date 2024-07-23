#include <iostream>
#include <string>

int division(int, int);
double division(double, double);

int main()
{
    int x = 5;
    int y = 2;
    double x1 = 5.0;
    double y1 = 2.0;
    auto res1 = division(x, y);
    auto res2 = division(x1, y1);
    
    std::cout << "Res1(int)    is : " << res1 << '\n';
    std::cout << "Res2(double) is : " << res2 << '\n';
}

int division(int op1, int op2)
{
    return op1 / op2;
}

double division(double op1, double op2)
{
    return op1 / op2;
}
