#pragma once

#include <string>

using namespace std;

class Transaction
{
public:
    Transaction(int amount, string date, bool type);
    
    const int& getAmount() const;
    const string& getDate()const;
    const bool& getType()const;
    
    
private:
    
    bool type;
    int amount;
    string date;
    
    
};
