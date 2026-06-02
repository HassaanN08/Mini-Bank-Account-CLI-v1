# Mini Bank Account CLI

A simple C++ terminal-based banking program that allows a user to deposit money, withdraw money, view their balance, and track the number of successful transactions.

This project was built as part of my C++ learning journey to practice pointers, functions, switch statements, loops, validation, and basic terminal-based program flow.

## Features

* Display a banking menu in the terminal
* Deposit money into an account
* Withdraw money from an account
* Prevent withdrawals greater than the current balance
* Prevent invalid deposit and withdrawal amounts
* Show current account balance
* Track successful transactions
* Keep running until the user chooses to exit

## Menu Options

```text
1. Deposit Money
2. Withdraw Money
3. Show Balance
4. Show Transaction Count
5. Exit
```

## Concepts Practiced

This project helped me practice:

* C++ functions
* Pointers
* Passing addresses to functions
* Dereferencing pointers
* `while` loops
* `switch` statements
* Conditional statements
* Basic input/output
* Input validation
* Menu-based CLI structure
* Managing state through variables

## How It Works

The program stores the account balance in a variable inside `main()`.

Functions like `depositMoney()` and `withDrawMoney()` receive the address of the balance variable using pointers. This allows those functions to directly update the original balance.

Example concept used:

```cpp
void depositMoney(double* balance) {
    double deposit;
    cin >> deposit;
    *balance += deposit;
}
```

The `*balance` syntax is used to access and update the value stored at the address passed into the function.

## How to Compile

Use `g++`:

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o bank
```

## How to Run

```bash
./bank
```

## Sample Output

```text
=======================
   Mini Bank Account   
=======================

Balance: $0

1. Deposit Money
2. Withdraw Money
3. Show Balance
4. Show Transaction Count
5. Exit

Enter your choice: 1
Enter Deposit Amount: $500

Balance: $500

1. Deposit Money
2. Withdraw Money
3. Show Balance
4. Show Transaction Count
5. Exit

Enter your choice: 2
Enter Amount To Withdraw: $150

Balance: $350

1. Deposit Money
2. Withdraw Money
3. Show Balance
4. Show Transaction Count
5. Exit

Enter your choice: 4
Total Transactions: 2
```

## Validation Rules

* Deposit amount must be greater than `0`
* Withdrawal amount must be greater than `0`
* Withdrawal amount cannot be greater than the current balance
* Menu choice must be between `1` and `5`

## Future Improvements

Possible improvements for future versions:

* Format money to two decimal places
* Reduce repeated menu code
* Add transaction history
* Store deposits and withdrawals in arrays or vectors
* Save account data to a file
* Rewrite the project using references instead of pointers
* Rewrite the project using classes and objects
* Add multiple bank accounts
* Add account login or PIN verification

## Project Status

Version 1 is complete.

This version focuses on basic C++ fundamentals, especially pointers and function-based program structure. Future versions can improve the design using vectors, file handling, and object-oriented programming.
