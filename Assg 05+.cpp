//Write a C++ program with options such as 
//Calculate the are of a circle
//Calculate the area of a rectangle
//Calculate the area of a triangle
//Quit
#include <iostream>
#include <cmath> // For mathematical functions like pow() and M_PI
using namespace std;

int main() {
    int choice;
    bool quit = false;

    while (!quit) {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Calculate Area of Circle\n";
        cout << "2. Calculate Area of Rectangle\n";
        cout << "3. Calculate Area of Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double radius, areaCircle;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                areaCircle = M_PI * pow(radius, 2); // Calculate area of circle
                cout << "Area of the circle: " << areaCircle << endl;
                break;
            }
            case 2: {
                double length, width, areaRect;
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                areaRect = length * width; // Calculate area of rectangle
                cout << "Area of the rectangle: " << areaRect << endl;
                break;
            }
            case 3: {
                double base, height, areaTriangle;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                areaTriangle = 0.5 * base * height; // Calculate area of triangle
                cout << "Area of the triangle: " << areaTriangle << endl;
                break;
            }
            case 4:
                quit = true; // Set quit flag to true to exit the loop
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                break;
        }
    }

    return 0;
}