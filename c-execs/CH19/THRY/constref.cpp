#include <iostream>

void myfunc(const std::string& byconstref);

int main()
{
    std::string s = "Postal 2";
    myfunc(s);
}

void myfunc(const std::string& byconstref)
{
    std::cout << "Arg passed as const ref: " 
    << byconstref << '\n';
}
