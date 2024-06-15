#include <iostream>

int main()
{
    int* p = new int;
    *p = 123;

    std::cout << "Got something: " << *p << '\n';
    delete p;
}
