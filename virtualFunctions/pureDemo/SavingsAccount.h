#pragma once

#include "Freezable.h"
#include "BankAccount.h"
#include "Loggable.h"
#include <list>


class SavingsAccount : public BankAccount, public Loggable, public Freezable
{
public:
    SavingsAccount(double initialBalance, double interestRate = 0.0);
    virtual ~SavingsAccount ();

    void earnInterest();

    virtual void deposit(double amount);
    virtual void withdraw(double amount);

    // Implement pure functions from Bank Account
    virtual std::string getTermsAndConditions();
    virtual double getGuaranteedLimit();

    // Implement pure virtual functions from Freezable
    virtual void freeze();
    virtual void unfreeze();

    // Implement pure log function from Loggable
    virtual void log(const std::string & message) const;

private:
    double interestRate;
    bool frozen;
};
