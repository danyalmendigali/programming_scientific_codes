#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct BankAccount
{
   string ownerName;
   string accountNumber;
   double balance;

   void deposit(double amount)
   {
       balance += amount;
       cout << "Пополнение на сумму " << amount << " выполнено. Новый баланс: " << balance << endl;
   }

   void withdraw(double amount)
   {
       if(balance >= amount) {
        balance -= amount;
        cout << "Снятие на сумму " << amount << " выполнено. Новый баланс: " << balance << endl;
       }
       else {
        cout << "Недостаточно средств на счете." << endl;
       }
   }
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    BankAccount account;
    account.ownerName = "John Doe";
    account.accountNumber = "1234567890";
    account.balance = 1000.0;

    cout << "Имя владельца: " << account.ownerName << endl;
    cout << "Номер счета: " << account.accountNumber << endl;
    cout << "Баланс: " << account.balance << endl;

    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(1500.0);
















   return 0;
}





