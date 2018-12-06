#pragma once

#include <string>

class BankAccount
{
public:
    BankAccount (double initialBalance);

    double getBalance() const;

    virtual void deposit(double amount);
    virtual void withdraw(double amount);

    // Pure virtual functions
    virtual std::string getTermsAndConditions() = 0;
    virtual double getGuaranteedLimit() = 0;

    virtual ~BankAccount ();

protected:
    double balance;
};
