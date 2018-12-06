#include <fstream>
#include <iostream>

void openCloseFilesExplicitly()
{
    // Declare file stream objects (files aren't opened yet).
    std::ofstream ofile;
    std::ifstream ifile;
    std::fstream  iofile;

    // Open the files.
    ofile.open("file1.dat");    // Opens file1.dat for writing.
    ifile.open("file2.dat");    // Opens file2.dat for reading.
    iofile.open("file3.dat");   // Opens file3.dat for reading/writing.

    // Use the files...
    if (ofile.is_open())
    {
        ofile << "The first line of file " << std::endl;
    }
    else
    {
        std::cerr << "Could not open file file1.dat" << std::endl;
    }
    // Close the files.
    ofile.close();
    ifile.close();
    iofile.close(); 
}

void openCloseFilesImplicitly()
{
    // Declare file stream objects (files opened implicitly by constructors).
    std::ofstream ofile("file1.dat");
    std::ifstream ifile("file2.dat");
    std::fstream  iofile("file3.dat");

    // Use the files...
    if (ofile.is_open())
    {
        ofile << "The first line of file " << std::endl;
    }
    else
    {
        std::cerr << "Could not open file file1.dat" << std::endl;
    }
}   // Files closed implicitly by destructors.


int main(int argc, char *argv[])
{
    
    openCloseFilesImplicitly();
    openCloseFilesExplicitly();

    return 0;
}
