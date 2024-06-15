#include <iostream>

int main()
{
    int itg = 256;
    bool x  = true;
    bool y  = true;
     
    if (itg > 100 && itg < 300)
    {
        if (itg > 100 || x)
        {
           bool y = !x; 
        }
    }
    
    std::cout << "The y is " << y << '\n';
}
