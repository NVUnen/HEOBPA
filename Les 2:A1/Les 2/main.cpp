#include <iostream>
#include "BankAccount.hpp"
#include "Transaction.hpp"

int main(){
    
    BankAccount account = BankAccount("Niels van Unen",2000);
    
    account.Transactions(account, Transaction(500, "19-11-2016","false"));
    account.Transactions(account, Transaction(100, "12-11-2016","true"));
    account.Transactions(account, Transaction(20, "30-11-2016","true"));
    
    /*cout << account.getName() << " current saldo: " << account.getAmount() << endl;
    
    account = account + transaction3;
    cout << transaction3.getName() << " - " << transaction3.getTransaction() << " - " << transaction3.getDate()<< endl;
    
    cout << account.getName() << " current saldo: " << account.getAmount() << endl;
    
    account = account - transaction2;
    cout << transaction2.getName() << " - " << transaction2.getTransaction() << " - " << transaction2.getDate()<< endl;
    
    cout << account.getName() << " current saldo: " << account.getAmount() << endl;*/
    
    cout << &account << endl;
    
    
    
    return 0;
}
