#pragma once

#include <string>
#include "Transaction.hpp"

using namespace std;

class BankAccount
{
public:
    BankAccount(string name, int amount, int history = 0);
    virtual~BankAccount();
    
    const string &getName() const;
    
    int getAmount() const;
    
    int getHistory() const;
    
    
    BankAccount operator+(const Transaction& account) const;
    
    BankAccount operator-(const Transaction& account) const;
    
private:
    string name;
    int amount;
    int history;
    
};
