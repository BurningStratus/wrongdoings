#include <iostream>
#include <string>

int main()
{
    std::string fullname= "John Doe";

    std::cout << "Full string is: " << fullname << '\n';
    
    std::string f_name = fullname.substr(0, 4);
    std::string l_name = fullname.substr(5, 3);
    std::cout << "First name: " << f_name << " Last name: " << l_name << '\n';
    
}
