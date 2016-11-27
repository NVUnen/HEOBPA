#include "Transaction.hpp"

Transaction::Transaction(int amount, string date, bool type){
    this->amount = amount;
    this->date = date;
    this->type = type;
}

const string& Transaction::getDate() const{
    return date;
}

const int& Transaction::getAmount() const{
    return amount;
}

const bool& Transaction::getType() const{
    return type;
}
