#include <iostream>

int main() 
{
    double obj = 9.81;
    double* ref = &obj;
    double deref = *ref;
    std::cout << "Deref obj: " << deref << '\n';
}
