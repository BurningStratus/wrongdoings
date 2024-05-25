#include <iostream>

int main()
{
    int x = 1433;
    
    int* p = &x;
    int z = *p;

    std::cout << z << " << WE GOT SOMETHING FROM MEMORY!!!" << '\n';
    
    *p = 1337;
    z = *p;
     
    std::cout << z << " << WE CHANGED ORIGINAL VALUE!!!" << '\n';
    
    char* pin = nullptr;
    
    int zig = 1337;
    int& zag = zig;
    
    std::cout << zig << " << zig | zag>> " << zag << '\n';
    
    zig = 3000;
    std::cout << zig << " << zig | zag>> " << zag << '\n';
    
    zag = 5000;
    std::cout << zig << " << zig | zag>> " << zag << '\n';
    
   const int& zug = zig;
    zig = 7000;    
    std::cout << zig << " << zig | zug>> " << zug << '\n';
    
}
