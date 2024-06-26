#include <iostream>

class Machine
{
public:
    double hp;
    std::string model;
    int year;

    Machine( std::string model, double hp, int year )
    {
        this->model = model;
        this->hp    = hp;
        this->year  = year;
    }    
};

int main()
{
    Machine ford( "Falcon", 500.51, 1971 );
    std::cout << ford.model << std::endl;
    std::cout << ford.hp << std::endl;
    std::cout << ford.year << std::endl;
    
}
