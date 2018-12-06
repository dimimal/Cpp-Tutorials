#include <iostream>
#include "SavingsAccount.h"

void freezeMe(Freezable & f)
{
    // Takes an object reference which implements "Freezable" 
    f.freeze();
}

int main(int argc, char *argv[])
{
    // Create object
    SavingsAccount acc(1000, 2.5);

    std::cout << "Terms and conditins "  << acc.getTermsAndConditions() 
        << std::endl;

    std::cout << "Guarantee Limit: "  << acc.getGuaranteedLimit() 
        << std::endl;

    acc.deposit(100);
    acc.deposit(250);
    acc.withdraw(50);
    acc.earnInterest();

    freezeMe(acc);

    // Account frozen
    acc.deposit(100);
    acc.deposit(250);
    acc.withdraw(50);
    acc.earnInterest();

    // Unfreeze account 
    acc.unfreeze();

    acc.deposit(1000);
    acc.deposit(400);
    acc.withdraw(328);
    acc.earnInterest();
    
    return 0;

}
