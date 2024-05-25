#include <iostream>

class MyClass
{
public:
    int x;
    void printx()
    {
        std::cout << "Got x from public: " << x << std::endl;
    }
};

int main()
{
    MyClass o;
    o.x = 100;
    o.printx();
}
