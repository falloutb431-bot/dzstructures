#include <iostream>
#include <string>

using namespace std;

struct BankAccount {
    int accountNumber;
    string ownerName;
    double balance;
};

void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    cout << "Enter account number: ";
    cin >> account.accountNumber;

    cout << "Enter owner's name: ";
    cin.ignore();
    getline(cin, account.ownerName);

    cout << "Enter current balance: ";
    cin >> account.balance;

    double newBalance;
    cout << "Enter new balance: ";
    cin >> newBalance;

    updateBalance(account, newBalance);

    cout << "Your account: " << account.ownerName << ", "
        << account.accountNumber << ", " << account.balance << endl;

    return 0;
}