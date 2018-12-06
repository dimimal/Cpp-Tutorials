#include <iostream>
#include <iomanip> // Parametarized manipulators 
#include <string>

// Class point which fills x, y from istream  
class point
{
public:
    int x, y;

};

/* Custom operator function to input data onto class point variables */
std::istream & operator >> (std::istream & is, point & p)
{
    is >> p.x >> p.y;
    return is;
}

/* Custom operator function to prompt class point variables */
std::ostream & operator << (std::ostream & os, const point & p)
{
    os << "[" << p.x << "," << p.y << "]";
    return os;
}

int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;
    std::cout << "Your string is " << s << std::endl;   

    // Flush the buffer
    std::cin.ignore();

    std::string name;
    std::cout << "Full name: ";
    std::getline(std::cin, name);
    
    std::string address;
    std::cout << "Full address: ";
    std::getline(std::cin, address);
    
    std::cout 
        << name << std::endl 
        << address << std::endl;

    point p1, p2;
    std::cout << "Please enter two points" << std::endl; 
    std::cin >> p1 >> p2;
    
    std::cout << "Points p1 and p2: " << std::endl
        << p1 << std::endl 
        << p2 << std::endl;

    std::cout << std::setw(10) << -123.45 << std::endl;

    return 0;
}

