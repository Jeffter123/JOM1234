//C++ Prrogram that calculates fine on books returned to the library.
#include <iostream>
using namespace std;

int main() {
    int daysLate;
    char bookType;
    double lateFee = 0.0;

    // Input number of days late
    cout << "Enter the number of days late: ";
    cin >> daysLate;

    // Input type of book (R for Regular, C for Children's, and REF for Reference)
    cout << "Enter the type of book (R for Regular, C for Children's, REF for Reference): ";
    cin >> bookType;

    // Calculate late fee based on days late and type of book
    if (daysLate <= 0) {
        cout << "No late fee.\n";
    } else {
        if (bookType == 'R') { // Regular book
            if (daysLate <= 7) {
                lateFee = 0.50 * daysLate;
            } else {
                lateFee = 3.50 + 1.00 * (daysLate - 7);
            }
        } else if (bookType == 'C') { // Children's book
            if (daysLate <= 5) {
                lateFee = 0.25 * daysLate;
            } else {
                lateFee = 1.75 + 0.75 * (daysLate - 5);
            }
        } else if (bookType == 'R' || bookType == 'C' || bookType == 'REF') { // Reference book
            if (daysLate <= 2) {
                lateFee = 1.00 * daysLate;
            } else {
                lateFee = 4.00 + 3.00 * (daysLate - 2);
            }
        } else {
            cout << "Invalid book type.\n";
            return 1; // Exit program with error
        }

        // Display late fee
        cout << "Late fee for returning the book is: $" << lateFee << endl;
    }

    return 0;
}
