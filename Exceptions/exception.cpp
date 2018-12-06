#include <iostream>

using namespace std;

class throwexception 
{
public:
    throwexception(); //Constructor

    ~throwexception();  //Destructor
};

throwexception::throwexception(void)
{
    cout << "throwexception object constructed" << endl;
    //Constructor
}

throwexception::~throwexception(void) 
{
    //Destructor
    cout << "throwexception destructor called." << endl;
    //throw 9;
}

int main() 
{
    try 
    {
        throwexception texc;
        cout << "Throwing exception will cause termination of program." << endl;
        throw 7;
    }
    catch (...) 
    {
        //Catch exception
        cout << "Main Exception caught" << endl;
    }
} 
 
