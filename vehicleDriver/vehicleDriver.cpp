// Driver program to test the Vehicle, Car, and Truck classes.
#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
    // Variables to hold the user's input.
    string usrManufacturer = "";
    int usrYear = 0,
        usrDoors = 0;
    double usrTowingCapacity = 0.0;

    // Testing the Vehicle class. Start by getting data from the user.
    cout << "Enter a manufacturer: ";
    getline(cin, usrManufacturer);
    cin.ignore();
    cout << "Enter a year: ";
    cin >> usrYear;

    // Instantiate Vehicle class and test the displayInfo() member function.
    Vehicle testVehicle(usrManufacturer, usrYear);
    testVehicle.displayInfo();

    return 0;
}