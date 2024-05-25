#include <iostream>

int main()
{
    int* p = new int; // allocating memory for int.
    *p = 100;         // dereferencing the pointer and putting value there.
    std::cout << "Got value from mem: " << p << " " << *p << std::endl; 
    delete p;
}
