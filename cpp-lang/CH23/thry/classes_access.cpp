#include <iostream>

class MyClass
{
    // classes are private by default
    
    public:
    // evrything here has public access
    int x;
    void printx()
    {
        std::cout << "Got x(inside a class // public): " << x << std::endl;
    }

    protected:
    // evrything here has protected access level
    private:
    // evrything here has private access level
}

struct MyStruct
{
    //structs are public by default
    
}

int main()
{
    
}
