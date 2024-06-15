#include <iostream>

// Default contructor VVV
class MyClass
{
    public:
        int x, y;
    
        MyClass(int xx, int yy)
        {
            std::cout << "Custom constructor invoked." << std::endl;
            x = xx;
            y = yy;
        }
};

int main()
{
    MyClass o{ 1, 2 };
    std::cout << "Got xx: " << o.x << " Got yy: " << o.y << std::endl;
}
