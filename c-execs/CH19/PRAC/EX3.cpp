#include <iostream>

int multiplication(int op1, int op2);

int main()
{
    int x = 10;
    int y = 14;
    int ops = multiplication(10, 14);
    
    std::cout << "The result of multiplication is: " << ops << '\n';
}

int multiplication(int op1, int op2)
{
    return op1 * op2;
}
