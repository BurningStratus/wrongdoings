#include <iostream>

class MyClass
{
    public:
        int x, y;
        MyClass(int xx, int yy) 
            : x{ xx }, y{ yy } // member init list
        {
        }
};

int main()
{
    MyClass o{ 1, 2 }; // invoke a custom contructor
    std::cout << "Got x: " << o.x << " Got y: " << o.y << std::endl;
}
