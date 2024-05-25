#include <iostream>
#include <string>

int main()
{
    std::string strg = "Hello C++ World.";
    char find_s = 'C';
    auto found  = strg.find(find_s);
    
    if (found != std::string::npos)
    {
        std::cout << "String found." << '\n';
    } else {
        std::cout << "Ah hell nah."  << '\n';
    }
}
