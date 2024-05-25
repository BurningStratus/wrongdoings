#include <iostream>
#include <string>

int main()
{
    std::string s = "Hi there. Would you like to sign my petition?";
    std::cout << s.c_str() << '\n';

    std::string sub = s.substr(3, 6);
    std::cout << "Got substr: " << sub << '\n';
    
    std::string finds = "you";
    std::string::size_type found = s.find(finds);
    
    std::cout << "Looking for string: " << finds << '\n';
     
    if (found != std::string::npos)
    {
        std::cout << "Substr was found at pos: " << found << '\n';
    }
    else
    {
        std::cout << "Substring was not found." << '\n';
    }
}
