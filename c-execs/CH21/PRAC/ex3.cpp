#include <iostream>

int main()
{
    int x = 1433;
    int* p = new int{ x };
    delete p;
}
