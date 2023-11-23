// Created by: Finn Kitor
// Created on: November 23rd, 2023
// This program uses a function to convert from celsius to fahrenheit.
#include <iostream>
using namespace std;

void fahrenheit() {
    try {
        // Prompting the user to enter the temperature in Celsius
        double temperature_celsius;
        cout << "Enter temperature in Celsius: ";
        cin >> temperature_celsius;

        // Converting the temperature from Celsius to Fahrenheit
        double temperature_fahrenheit = (9.0 / 5.0) * temperature_celsius + 32;

        // Displaying the converted temperature in Fahrenheit
        cout << "The temperature in Fahrenheit is: " << temperature_fahrenheit << "°F" << endl;
    }
    // Response to invalid inputs
    catch (const exception &e) {
        cerr << "Invalid input, please enter a temperature in Celsius." << endl;
    }
}

int main() {
    fahrenheit();
    return 0;
}
