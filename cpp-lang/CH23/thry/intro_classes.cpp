#include <iostream>

// intro to classes in C++


class MyClass;   // declare classname
class MyClass{}; // declaring and defining an empty class

class MyClass
{
    // add some data
    char c;
    int  x;
    double d;
    // class functions
    
    // 1. func inside the class
    void dosomething()
    {
        std::cout << "lets pretend that something happens here" << std::endl;
    }
    
    // 2. func belongs to a class but is defined outside of it
    void somethingdo();
};

// 2. func belongs to a class but is defined outside of it
void MyClass::somethingdo()
{
    std::cout << "SMTHng" << std::endl;
}


int main()
{
    MyClass obj; // define an instance of a class
}
