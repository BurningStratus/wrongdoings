#include <iostream>
#include <string>

void myprint(char arg);
void myprint(double arg);
void myprint(int arg);

int main()
{
    char   a = 97;
    int    x = 10;
    double g = 9.81;
    myprint(a);
    myprint(x);
    myprint(g);
}

void myprint(char arg)
{
    std::cout << "char: " << arg << '\n';
}
void myprint(double arg)
{
    std::cout << "double: " << arg << '\n';
}
void myprint(int arg)
{
    std::cout << "int: " << arg << '\n';
}
