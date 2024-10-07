// Jovanni Sanchez
// Lecture 5
// 10/7/2024

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double amountInTheBank;
    int amountOfTransactions;

    cout << "How much money do you have in the bank?: $";
    cin >> amountInTheBank;

    cout << "How many transactions have you made?: ";
    cin >> amountOfTransactions;

    string typeOfTransaction;
    double amountUserTransacted;

    cout << "What type of transaction did you want to make, Credit or Debit?: ";
    cin >> typeOfTransaction;

    while ((typeOfTransaction != "Credit" && "credit") && (typeOfTransaction != "Debit" && "debit"))
    {
        cout << "Invalid type of transaction.\n"
             << "Please retype your type of transaction: ";
        cin >> typeOfTransaction;
    }

    cout << "How much was each transaction?: $";
    cin >> amountUserTransacted;

    int currentTransaction;
    double finalAmountInBank;

    for(currentTransaction = 1; currentTransaction <= amountOfTransactions; currentTransaction = currentTransaction + 1)
    {
        if(typeOfTransaction == "Credit" || "credit")
        {
            finalAmountInBank =  finalAmountInBank + (amountInTheBank + amountUserTransacted);
        }
        else if(typeOfTransaction == "Debit" || "debit")
        {
            finalAmountInBank =  finalAmountInBank + (amountInTheBank - amountUserTransacted);
        }

        cout << "The amount of money left in your bank account after " << currentTransaction 
             << " transactions" << fixed << setprecision(2) 
             << " is $" << finalAmountInBank << "\n";
    }

    return 0;
}