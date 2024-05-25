#include <iostream>

int main()
{
    double myArray[5] = { 1.23, 5.6, 2.11, 9.11, 1.996 };

    std::cout << "First array element: " << myArray[0] 
    << " and the last: " << myArray[4] << '\n';

    myArray[0] = 6.33;
    myArray[4] = 1.33;
    
    std::cout << "First array element: " << myArray[0] 
    << " and the last: " << myArray[4] << '\n';
}
