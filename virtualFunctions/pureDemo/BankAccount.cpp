#include "BankAccount.h"
#include "SavingsAccount.h"
#include <iostream>

BankAccount::BankAccount(double initialBalance) 
    : balance(initialBalance) 
{}

BankAccount::~BankAccount() 
{
}

double BankAccount::getBalance() const
{
    return balance;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
}

void BankAccount::withdraw(double amount)
{
    balance -= amount;
}
