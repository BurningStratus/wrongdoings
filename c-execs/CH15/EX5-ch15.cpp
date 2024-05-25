#include <string>
#include <iostream>

int main()
{
    std::cout << "Write ur name: " << '\n';

    std::string full_name;

    std::getline(std::cin, full_name);
    std::cout << "You entered: " << full_name << '\n';
}
