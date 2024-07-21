//Using switch case write a C++ Program simulating traffic lights.

#include <iostream>
#include <chrono> // For std::chrono
#include <thread> // For std::this_thread

using namespace std;

int main() {
    int timer = 0; // Timer in seconds
    int lightState = 1; // Initial traffic light state: 1 - Red, 2 - Yellow, 3 - Green

    while (timer <= 30) { // Simulate for 30 seconds
        switch (lightState) {
            case 1:
                cout << "Red light - Stop!\n";
                this_thread::sleep_for(chrono::seconds(5)); // Red light for 5 seconds
                lightState = 2; // Change to Yellow
                break;
            case 2:
                cout << "Yellow light - Prepare to stop.\n";
                this_thread::sleep_for(chrono::seconds(2)); // Yellow light for 2 seconds
                lightState = 3; // Change to Green
                break;
            case 3:
                cout << "Green light - Go!\n";
                this_thread::sleep_for(chrono::seconds(5)); // Green light for 5 seconds
                lightState = 1; // Change to Red
                break;
            default:
                cout << "Invalid state.\n";
                break;
        }

        timer += 5; // Increment timer by 5 seconds after each light cycle
    }

    cout << "Simulation ended.\n";

    return 0;
}
