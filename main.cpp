#include <iostream>
using namespace std;

void depositMoney(int* balance) {
    int deposit;
    cout << "Enter Deposit Amount: $";
    cin >> deposit;

    while(deposit < 0) {
        cout << "Invalid amount. Try again: $";
        cin >> deposit;
    }

    *balance += deposit;
}

void withDrawMoney(int* balance) {
    int withdraw;
    cout << "Enter Amount To Withdraw: $";
    cin >> withdraw;

    while(withdraw < 0 || withdraw > *balance) {
        cout << (withdraw < 0 ? "Invalid amount. Try again: $" : "Entered amount greater than your current balance. Try again: $");
        cin >> withdraw;
    }

    *balance -= withdraw;
}

void getChoice(int* choice) {
    cout << "Enter your choice: ";
    cin >> *choice;
    while (*choice < 1 || *choice > 5) {
        cout << "Invalid choice. Try again: ";
        cin >> *choice;
    }
}

void showMenu(int* balance) {
    cout << "Balance: $" << *balance << '\n' << '\n';
    cout << "1. Deposit Money" << '\n' << "2. Withdraw Money" << '\n' << "3. Show Balance" << '\n' << "4. Show Transaction Count" << '\n' << "5. Exit" << '\n' << '\n';
}

int main() {

    cout << "=======================" << '\n' << "   Mini Bank Account   " << '\n' << "=======================" << '\n' << '\n';

    int balance = 0;
    int choice;
    int transactions = 0;

    showMenu(&balance);
    getChoice(&choice);

    while(choice != 5) {
        switch(choice) {
            case 1:
                depositMoney(&balance);
                transactions++;
                cout << '\n';
                showMenu(&balance);
                getChoice(&choice);
                break;
            case 2:
                withDrawMoney(&balance);
                transactions++;
                cout << '\n';
                showMenu(&balance);
                getChoice(&choice);
                break;
            case 3:
                showMenu(&balance);
                getChoice(&choice);
                break;
            case 4:
                cout << "Total Transactions: " << transactions;
                cout << '\n';
                showMenu(&balance);
                getChoice(&choice);
                break;
            default:
                showMenu(&balance);
                getChoice(&choice);
                break;
        }
    }

    return 0;
}