#include "Transaction.hpp"

Transaction::Transaction(int transaction, string date, string name){
    this->name = name;
    this->transaction = transaction;
    this->date = date;
}

const string& Transaction::getName() const{
    return name;
}

int Transaction::getTransaction() const{
    return transaction;
}

const string& Transaction::getDate() const{
    return date;
}
