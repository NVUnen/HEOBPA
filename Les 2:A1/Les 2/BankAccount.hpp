#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Transaction.hpp"

using namespace std;

class BankAccount
{
public:
    BankAccount(string name, int amount);
    
    virtual~BankAccount();
    
    void put(const string& date, const string& amount, const string& type);
    void Transactions(BankAccount& account, const Transaction& transaction);
    
    const string& getName() const;
    const string& getHistory() const;
    const int& getAmount() const;
    
    string& operator[](const string& date);
    
    BankAccount operator+(const Transaction& account) const;
    BankAccount operator-(const Transaction& account) const;
    
    friend ostream& operator<<(ostream& os, const BankAccount& bankaccount);
    
private:
    vector<string> dates;
    vector<string> amounts;
    vector<string> types;
    
    string name;
    string history;
    int amount;
    
    
};
