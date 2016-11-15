#include <iostream>
#include "BankAccount.hpp"
#include "Transaction.hpp"

int main(){
    
    BankAccount account = BankAccount("Niels van Unen",2000);
    
    Transaction transaction1 = Transaction(500, "15-11-2016","Food");
    Transaction transaction2 = Transaction(200, "17-11-2016","Games");
    Transaction transaction3 = Transaction(1000, "20-11-2016","Salary");
    
    cout << account.getName() << " current saldo: " << account.getAmount() << endl;
    
    account = account + transaction3;
    cout << transaction3.getName() << " - " << transaction3.getTransaction() << " - " << transaction3.getDate()<< endl;
    
    cout << account.getName() << " current saldo: " << account.getAmount() << endl;
    
    account = account - transaction2;
    cout << transaction2.getName() << " - " << transaction2.getTransaction() << " - " << transaction2.getDate()<< endl;
    
    cout << account.getName() << " current saldo: " << account.getAmount() << endl;
    
    return 0;
}
