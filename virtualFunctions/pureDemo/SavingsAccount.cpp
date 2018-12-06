#include "SavingsAccount.h"

#include <iostream>

SavingsAccount::SavingsAccount(double initialBalance, double interestRate)
    : BankAccount(initialBalance), interestRate(interestRate), frozen(false)
{
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::earnInterest()
{
    if (!frozen)
    {
        double interest = balance * ( interestRate/100 );
        deposit(interest);
    }
}

void SavingsAccount::deposit(double amount)
{
    if (!frozen) 
    {
        BankAccount::deposit(amount);    
        log("Deposit: " + std::to_string(amount));
    }
}

void SavingsAccount::withdraw(double amount)
{
    if (!frozen && amount <= balance) 
    {
        BankAccount::withdraw(amount);    
        log("Withdraw: " + std::to_string(amount));
    }
}

std::string SavingsAccount::getTermsAndConditions()
{
    return "This is savings account. You cannot go overdrawn.";
}

double SavingsAccount::getGuaranteedLimit()
{
    return 75000;
}

void SavingsAccount::freeze()
{
    frozen = true;
}

void SavingsAccount::unfreeze()
{
    frozen = false;
}

void SavingsAccount::log(const std::string & message) const
{
    std::cout << message  << std::endl;
}
