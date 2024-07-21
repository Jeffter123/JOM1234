//Write a program that Calculates the total cost of a shopping cart after applying for discount.
#include <iostream>
using namespace std;

int main() {
    double totalCost;
    double discountRate = 0.0;
    double discountedCost;

    // Input total cost of shopping cart
    cout << "Enter the total cost of the shopping cart: Ksh. ";
    cin >> totalCost;

    // Apply discount based on total cost
    if (totalCost >= 1000.0) {
        discountRate = 0.1; // 10% discount for total cost $1000 or more
    } else if (totalCost >= 500.0) {
        discountRate = 0.05; // 5% discount for total cost between $500 and $999.99
    } else {
        discountRate = 0.0; // No discount for total cost less than $500
    }

    // Calculate discounted cost
    discountedCost = totalCost - (totalCost * discountRate);

    // Display the results
    cout << "Total cost before discount: Ksh. " << totalCost << endl;
    cout << "Discount rate applied: " << (discountRate * 100) << "%" << endl;
    cout << "Total cost after discount: Ksh. " << discountedCost << endl;

    return 0;
}
