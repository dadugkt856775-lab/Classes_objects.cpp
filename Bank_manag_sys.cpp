#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Deposit: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        double amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited Successfully!\n";
        } else {
            cout << "Invalid Amount!\n";
        }
    }

    void withdraw() {
        double amount;

        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid Amount!\n";
        }
        else if (amount > balance) {
            cout << "Insufficient Balance!\n";
        }
        else {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
    }

    void displayBalance() {
        cout << "\n----- ACCOUNT DETAILS -----\n";
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Available Balance: Rs. " << balance << endl;
        cout << "---------------------------\n";
    }
};

int main() {
    Bank b;
    int choice;

    b.createAccount();

    do {
        cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                b.deposit();
                break;

            case 2:
                b.withdraw();
                break;

            case 3:
                b.displayBalance();
                break;

            case 4:
                cout << "Thank You for Banking With Us!\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}
