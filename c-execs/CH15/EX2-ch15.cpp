#include <iostream>

int main() 
{
    double mydouble;
    double& myref = mydouble;
    
    myref = 0.15;
    
    std::cout << "mydouble: " << mydouble << '\n';
    myref = 0.17;
    
    std::cout << "mydouble: " << mydouble << '\n';
}
