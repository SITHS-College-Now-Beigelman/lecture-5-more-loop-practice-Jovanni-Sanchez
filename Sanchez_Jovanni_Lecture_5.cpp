// Jovanni Sanchez
// Lecture 5
// 10/7/2024

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double moneyInTheBank;        // Assigned to the users balance
    string typeOfTransaction;     // Assigned to either Credit or Debit
    double moneyUserTransacted;   // Assigned to the value of each Transaction
    int numberOfTransactionsMade; // Will be used as limit for iteration

    cout << "How many transactions were made?: ";
    cin >> numberOfTransactionsMade; // Sets the limit for the following loop

    cout << "How much money do you have in the bank?: $";
    cin >> moneyInTheBank; // Sets the user's inital bank balance

    cout << "What was the value of each transaction made?: $";
    cin >> moneyUserTransacted; // Sets the value of each transaction being iterated through

    cout << "What type of transaction did you want to make, Credit or Debit?: ";
    cin >> typeOfTransaction; // Sets the transaction to either Credit or Debit

    // While its not a valid transaction,
    // keep the user inputting until a valid transaction is reached

    while ((typeOfTransaction != "Credit" && "credit") && (typeOfTransaction != "Debit" && "debit"))
    {
        cout << "Invalid type of transaction. "
             << "Please retype your type of transaction: ";
        cin >> typeOfTransaction;
    }

    int currentTransaction;          // Used for iteration
    double transactionSum;           // Assigned to the sum of all transactions
    double balanceAfterTransactions; // Will be assinged to the remaining balance

    cout << "\n"; // :/

    for (currentTransaction = 1; currentTransaction <= numberOfTransactionsMade; currentTransaction = currentTransaction + 1)
    {
        if (typeOfTransaction == "Credit" && "credit")
        {
            balanceAfterTransactions = moneyInTheBank += moneyUserTransacted;
            // Add the money transacted to the money already in the bank for the new balance

            // Add the money transacted to the sum for later use
            transactionSum += moneyUserTransacted;
        }
        else if (typeOfTransaction == "Debit" && "debit")
        // This could be an else statement but it looks pretty like this
        {
            balanceAfterTransactions = moneyInTheBank -= moneyUserTransacted;
            // Subtract the money transacted from the money already in the bank for the new balance

            // Subtract the money transacted to the sum for later use (Will result in negative numbers)
            transactionSum -= moneyUserTransacted;
        }

        cout << left
             << "Your balance after " << currentTransaction
             << " " << typeOfTransaction << " transactions" << fixed
             << setprecision(2) << " is $" << balanceAfterTransactions
             << setw(currentTransaction + 1) << setfill(' ') << "\n";

        // A little detail I wanted to add to make the output pretty
    }

    cout << "\n"
         << "Your new bank balance is $"
         << balanceAfterTransactions << ".";
    // Print the remaining or "new" bank balance

    cout << "\n"
         << "The sum of your " << typeOfTransaction
         << " Transactions for the day is $" << transactionSum << ".";
    // Print the sum of all transactions made today

    return 0;
}