#include <iostream>
#include <fstream>
#include <string>
#include "tempStats.h"

void displayAllStats();
void updateStat();
void displayStat(int index);
void createFileStat();


void createFileStat()
{
    std::fstream ofile("tempStats.bin", std::ios_base::binary | std::ios_base::out); 

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

void displayAllStats()
{
    std::fstream ifile("tempStats.bin", std::ios_base::binary | std::ios_base::in );
    if (ifile.is_open())
    {
        int index = 0;
        while (!ifile.eof())
        {
            tempStat ts;
            ts.read(ifile);

            if (ifile.gcount() == 0) 
            {
                // Last line has no bytes to read
                break;     
            }

            std::cout 
                << "Index " << index + 1 
                << ", tempStat: " << ts 
                << std::endl;

            index++;
        }
        ifile.close();
    } 
    else 
    {
        std::cerr << "Error opening file " << std::endl;         
    }

}

void updateStat(int index)
{
    tempStat ts;
    std::cout << "Enter minimum and maximum temperatures: ";
    std::cin >> ts;

    std::fstream ofile("tempStats.bin", std::ios_base::binary | std::ios_base::out | std::ios_base::in);
    if (ofile.is_open())
    {
        ts.write(ofile, index);
        ofile.close();

    }
    else 
    {
        std::cerr << "Couldn't open file."  << std::endl;
    }
}

void displayStat(int index)
{
    std::fstream ifile("tempStats.bin", std::ios_base::binary | std::ios_base::out | std::ios_base::in);
    if (ifile.is_open()) 
    {
        tempStat ts;
        ts.read(ifile, index);
        ifile.close();
    }
    else
    {
        std::cerr << "Could not open file." << std::endl;
    }
}

int main(int argc, char *argv[])
{
    int index;
    std::cout << "Temperature stats initially" << std::endl;    
    std::string path = "tempStats.bin";
    std::ifstream file(path.c_str(), std::ios_base::binary | std::ios_base::in);
    
    if (file.good())
    {
        // Ok, file exists 
        std::cout << "File Exists " << std::endl;
    } 
    else
    {
        // Create the stats file
        createFileStat();
        std::cout << "File Created!" << std::endl;
    }

    
    std::cout << "Which month do you want to update [1-12]?" << std::endl;
    std::cin >> index;
    index -= 1;

    if (index < 0 || index > 11)
    {
        std::cerr << "Wrong input " << index+1 << std::endl;   
    } 
    else 
    {
        updateStat(index);
        displayStat(index);

        std::cout << "Temperature Stats finally: " << std::endl;
        displayAllStats();
    }


    return 0;
}
