#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]) 
{ 
    // Show the difference of printing formats
    int x, y, z;
    double pi = 3.14159265358979;
    x = 3;
    y = 5;
    z = -1;

    std::cout << std::fixed << pi << std::endl;
    std::cout << std::scientific << pi << std::endl; 

    // Reinstate general format 
    // There is no general manipulator 
    std::cout.unsetf(std::ios::fixed | std::ios::scientific);
    std::cout << pi << std::endl;

    // Show signs
    std::cout << std::showpos;
    std::cout << x << " " << y << " " << z << std::endl;
    std::cout << std::noshowpos;
    std::cout << x << " " << y << " " << z << std::endl;

    std::cout << std::showbase;
    std::cout << 64 << std::endl;
    std::cout << std::oct << 64 << std::endl;
    std::cout << std::hex << 64 << std::endl;
    std::cout << std::noshowbase;

    // Hex
    std::cout << std::hex;
    std::cout << 123456789 << std::endl;
    std::cout << std::uppercase   << 123456789 << std::endl;
    std::cout << std::nouppercase << 123456789 << std::endl; 

    return 0;
}
