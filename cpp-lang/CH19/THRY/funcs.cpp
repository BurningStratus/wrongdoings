#include <iostream>

void passbyref(int& byreference)
{
    ++byreference;
    std::cout << "Arg passed by reference: " << byreference << '\n';
}

int main()
{
    int x = 20;
    int y = 50;
    passbyref(x);

    // std::cout<< "Sum of x and y is " << sum << '\n';
    std::cout<< "X is : " << x << '\n';
}

