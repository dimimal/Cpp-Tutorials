#include <iostream>
#include <fstream>

class tempStat
{
    public:
    // Data members.
    double minimum, maximum;

    // Constructor.
    tempStat(double min = 0.0, double max = 0.0)
        : minimum(min), maximum(max)
    {}

    // Helper method, to write a tempStat object to a file in binary format.
    void write(std::ostream & os)
    {
        os.write((char*)&minimum, sizeof(double));
        os.write((char*)&maximum, sizeof(double));
    }

    // Helper method, to read a tempStat object from a file in binary format.
    void read(std::istream & is)
    {
        is.read((char*)&minimum, sizeof(double));
        is.read((char*)&maximum, sizeof(double));
    }

    // Plus other members, as appropriate.
};

// Operatros to read/write tempstat objects
std::istream& operator >> (std::istream& is, tempStat & ts)
{
    is >> ts.minimum >> ts.maximum;
    return is;
}

std::ostream& operator << (std::ostream & os, const tempStat & ts)
{
    os << ts.minimum << "," << ts.maximum << std::endl;
    return os;
}

int main(int argc, char *argv[])
{
    // Write tempStats object
    std::ofstream ofile("tempStats.bin", std::ios_base::binary);
    if (ofile.is_open())
    {
        tempStat(-2.5, 7.5).write(ofile);
        tempStat(0, 9.9).write(ofile);
        tempStat(2.5, 11.0).write(ofile);
        tempStat(5.5, 14.5).write(ofile);
        tempStat(7.0, 17.7).write(ofile);
        tempStat(10.5, 23.7).write(ofile);
        tempStat(11.7, 29.5).write(ofile);
        tempStat(7.6, 22.9).write(ofile);
        tempStat(7.2, 21.5).write(ofile);
        tempStat(2.0, 16.0).write(ofile);
        tempStat(-4.7, 12.5).write(ofile);
        tempStat(-1.9, 8.5).write(ofile);
        
        ofile.close();
    
        std::cout << "Finished writing binary data to tempStats.bin." << std::endl;
    }
    else
    {
        std::cerr << "Couldn't open tempStats.bin for writing." << std::endl;
    }

    // Read tempStats objects from file
    std::ifstream ifile("tempStats.bin", std::ios_base::binary);
    if (ifile.is_open())
    {
        while (!ifile.eof())
        {
            tempStat ts;
            ts.read(ifile);
    
            if (ifile.gcount() == 0) 
            {
                break;  // If no bytes read, we're done.
            }
    
            std::cout << "Read temperature stats: " << ts << std::endl;
        }
        ifile.close();
    
        std::cout << "Finished reading binary data from tempStats.bin." << std::endl;
    }
    else
    {
        std::cerr << "Couldn't open tempStats.bin for reading." << std::endl;
    }

    return 0;
}
