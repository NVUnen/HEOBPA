#pragma once

#include <string>

using namespace std;

class Transaction
{
public:
    Transaction(int transaction, string date, string name);
    
    const string& getName() const;
    int getTransaction()const;
    const string& getDate()const;
    
    
private:
    
    string name;
    int transaction;
    string date;
  
    
};
