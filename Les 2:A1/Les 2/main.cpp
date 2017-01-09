#include <iostream>
#include "BankAccount.hpp"
#include "Transaction.hpp"

int main(){
    
    BankAccount account = BankAccount("Niels van Unen",2000);
    
    account.Transactions(account, Transaction(500, "19-11-2016","false"));
    account.Transactions(account, Transaction(100, "12-11-2016","true"));
    account.Transactions(account, Transaction(20, "30-11-2016","true"));
    
    cout << &account << endl;
    
    return 0;
}
