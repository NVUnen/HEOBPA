#include "BankAccount.hpp"

BankAccount::BankAccount(string name, int amount){
    this->name = name;
    this->amount = amount;
}

BankAccount::~BankAccount(){
}

void BankAccount::Transactions(BankAccount &account, const Transaction &transaction){
    string _type = "";
    
    if (transaction.getType()) {
         account = account + transaction;
        _type = "Bijschrijving";
    } else {
        account  = account - transaction;
        _type = "Afschrijving";
    }
    
    account.put(transaction.getDate(), to_string(transaction.getAmount()), _type);
}

void BankAccount::put(const string& date, const string& amount, const string& type) {
    dates.push_back(date);
    amounts.push_back(amount);
    types.push_back(type);
}

const string& BankAccount::getName() const {
    return name;
}

const string& BankAccount::getHistory() const {
    return history;
}

const int& BankAccount::getAmount() const {
    return amount;
}

BankAccount BankAccount::operator+(const Transaction& transaction) const {
    return BankAccount(name, amount + transaction.getAmount());
}

BankAccount BankAccount::operator-(const Transaction& transaction) const {
    return BankAccount(name, amount - transaction.getAmount());
}

ostream& operator<<(ostream& os, const BankAccount& bankaccount) {
    os << "Bank account: " << bankaccount.name << endl;
    os << "Amount: " << bankaccount.getAmount() << endl;
    os << "Total transactions: " << bankaccount.dates.size() << endl;
    os << "\nTransactions:" << endl;
    
    for (int i = 0; i < bankaccount.dates.size(); ++i) {
        os << "Datum: " << bankaccount.dates[i] << ". Bedrag: " << bankaccount.amounts[i] << ". Type: " << bankaccount.types[i] << endl;
    }
    
    return os;
}


