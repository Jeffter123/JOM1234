//A simple ATM withrdrawal program

#include <iostream>
using namespace std;

int main() {
    // Simulated user account details
    double accountBalance = 150000.0; // Initial account balance
    double withdrawalAmount;
    double dailyLimit = 5000.0; // Maximum withdrawal limit per day

    // Input withdrawal amount
    cout << "Enter the amount you want to withdraw: Ksh. ";
    cin >> withdrawalAmount;

    // Verify if withdrawal amount exceeds daily limit
    if (withdrawalAmount > dailyLimit) {
        cout << "Withdrawal amount exceeds daily limit of Kshs. " << dailyLimit << ".\n";
    } else {
        // Verify if account balance is sufficient
        if (withdrawalAmount <= accountBalance) {
            // Process withdrawal
            accountBalance -= withdrawalAmount; // Deduct withdrawal amount from account balance
            cout << "Withdrawal successful. Remaining balance: Ksh. " << accountBalance << endl;
        } else {
            cout << "Insufficient funds in your account.\n";
        }
    }

    return 0;
}
