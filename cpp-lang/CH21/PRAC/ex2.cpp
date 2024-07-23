#include <iostream>

int main()
{
    int* x = new int{ 100 };
    std::cout << "Got val: " << *x << std::endl;
    delete x;
}
