#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int num = 3;            // a simple variable holding the value 3
    int *pNum = &num;        // a pointer holding the address of num
    cout << pNum << endl;    // output the memory address of num
    cout << *pNum << endl;    
    
    *pNum = 45;
    cout << pNum << endl;
    cout << num << endl;
    cout << *pNum++ << endl;
    return 0;
}
