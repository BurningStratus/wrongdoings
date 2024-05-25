#include <iostream>
#include <string>

void custommessage(const std::string& arg);

int main()
{
    std::string s = "I'm clearly a victim of society.";
    custommessage(s);
}

void custommessage(const std::string& arg)
{
    std::cout << "Custom string: " << arg << '\n';
}
