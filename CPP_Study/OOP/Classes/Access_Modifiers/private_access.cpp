#include <iostream>
using namespace std;

/*
    - Use private for things that should not be visible or modifiable from outside the object—like internal state variables,
      or methods that are part of the object's implementation but not its interface.

    How to Access Private Members?

    The standard way to access the private data members of a class is by using the public member functions of the class.
    The function that provides the access is called getter method and the function that updates the value is called
    setter method. 
*/

class BankAccount {
private:
    double balance;     // This cannot be accessed directly from outside

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    // myAccount.balance = 1000;    ERROR! Can't access private member

    myAccount.deposit(500);
    myAccount.withdraw(200);

    cout << "Current balance: $" << myAccount.getBalance() << endl;

    return 0;
}
