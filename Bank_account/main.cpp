#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    BankAccount(int acc, string name, double bal)
    {
        accountNumber = acc;
        ownerName = name;
        balance = bal;
    }

    void credit(double amount)
    {
        balance = balance + amount;
        cout << "Amount Credited: " << amount << endl;
    }

    void debit(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Debited: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1(101, "Gaurav", 10000);

    b1.displayBalance();

    b1.credit(2000);
    b1.debit(3000);

    b1.displayBalance();

    return 0;
}