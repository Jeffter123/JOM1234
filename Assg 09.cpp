//C++ program that determines ticket price by the age and type of movie.
#include <iostream>
using namespace std;

int main() {
    int age;
    char movieType;
    double ticketPrice = 0.0;

    // Input age of the customer
    cout << "Enter the age of the customer: ";
    cin >> age;

    // Input type of movie (R for Regular, 2 for 2D, 3 for 3D)
    cout << "Enter the type of movie (R for Regular, 2 for 2D, 3 for 3D): ";
    cin >> movieType;

    // Calculate ticket price based on age and movie type
    if (age < 0 || age > 80) {
        cout << "Invalid age.\n";
    } else {
        if (movieType == 'R') { // Regular movie
            if (age >= 18) {
                ticketPrice = 220.50; // Adult ticket price for Regular movie
            } else {
                ticketPrice = 180.50; // Child ticket price for Regular movie
            }
        } else if (movieType == '2') { // 2D movie
            if (age >= 18) {
                ticketPrice = 300.00; // Adult ticket price for 2D movie
            } else {
                ticketPrice = 250.00; // Child ticket price for 2D movie
            }
        } else if (movieType == '3') { // 3D movie
            if (age >= 18) {
                ticketPrice = 520.00; // Adult ticket price for 3D movie
            } else {
                ticketPrice = 480.00; // Child ticket price for 3D movie
            }
        } else {
            cout << "Invalid movie type.\n";
            return 1; // Exit program with error
        }

        // Display ticket price
        cout << "Ticket price: Kshs. " << ticketPrice << endl;
    }

    return 0;
}
