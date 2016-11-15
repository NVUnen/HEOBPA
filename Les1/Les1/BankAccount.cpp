#include "BankAccount.hpp"

BankAccount::BankAccount(string name, int amount, int history){
    this->name = name;
    this->amount = amount;
    this->history = history;
}

BankAccount::~BankAccount(){
}

BankAccount BankAccount::operator+(const Transaction& account) const {
    return BankAccount(name, amount+account.getTransaction(), history+1);
}

BankAccount BankAccount::operator-(const Transaction& account) const {
    return BankAccount(name, amount-account.getTransaction(), history+1);
}

const string& BankAccount::getName() const{
    return name;
}

int  BankAccount::getAmount() const{
    return amount;
}

int BankAccount::getHistory() const{
    return history;
}
                       
