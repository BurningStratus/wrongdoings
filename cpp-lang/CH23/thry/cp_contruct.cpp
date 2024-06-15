#include <iostream>

class Myclass
{
    private:
        int x;
        int* p; // alloc mem for int pointer
    public:
        Myclass(int xx, int pp) : x{ xx }, p{ new int{ pp } } // alloc mem fro pointer value
        {
            std::cout << "Custom gen constructor invoked" << std::endl;
        }
        Myclass(const Myclass& rhs) : x{ rhs.x }, p{ new int{ *rhs.p }} // alloc mem for pointer val
        {
            std::cout << "Custom cp constructor invoked" << std::endl;
        }
};

int main()
{
    Myclass o1{ 1,2 }; 
    Myclass o2 = o1;
}
