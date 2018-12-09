#pragma once

#include <iostream>

class tempStat
{
    public:
    // Data members.
    double minimum, maximum;
    static const size_t RECORD_SIZE = 2 * sizeof(double);

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

    // Write tempstat at specified index in file stream
    void write(std::ostream & os, int index)
    {
        std::streampos pos(index * RECORD_SIZE);

        os.seekp(pos); // Go to pos
        std::cout << "Write record at position " << os.tellp() << std::endl;

        os.write((char*)&minimum, sizeof(double));
        os.write((char*)&maximum, sizeof(double));
    }

    // Helper method, to read a tempStat object from a file in binary format.
    void read(std::istream & is, int index)
    {
        std::streampos pos(index * RECORD_SIZE);
        is.seekg(pos);
        std::cout << "Read record at position " << is.tellg() << std::endl;

        is.read((char*)&minimum, sizeof(double));
        is.read((char*)&maximum, sizeof(double));
    }

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

