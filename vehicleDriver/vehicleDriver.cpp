// Justin This
// CIS 1202 501
// November 24, 2023
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

    // Program header
    cout << "Vehicle, Car, and Truck class Driver Program\n\n";

    // Testing the Vehicle class. Start by getting data from the user.
    cout << "Vehicle:\n";
    cout << "Enter a manufacturer: ";
    getline(cin, usrManufacturer);
    cout << "Enter a year: ";
    cin >> usrYear;
    cin.ignore();
    cout << endl;

    // Instantiate Vehicle class and test the displayInfo() member function.
    Vehicle testVehicle(usrManufacturer, usrYear);
    testVehicle.displayInfo();
    cout << endl;

    // Testing the Car class. Start by getting data from the user.
    cout << "Car:\n";
    cout << "Enter a manufacturer: ";
    getline(cin, usrManufacturer);
    cout << "Enter a year: ";
    cin >> usrYear;
    cout << "Enter a number of doors: ";
    cin >> usrDoors;
    cin.ignore();
    cout << endl;

    // Instantiate Car class and test the displayInfo() member function.
    Car testCar(usrManufacturer, usrYear, usrDoors);
    testCar.displayInfo();
    cout << endl;

    // Testing the Truck class. Start by getting data from the user.
    cout << "Truck:\n";
    cout << "Enter a manufacturer: ";
    getline(cin, usrManufacturer);
    cout << "Enter a year: ";
    cin >> usrYear;
    cout << "Enter a towing capacity: ";
    cin >> usrTowingCapacity;
    cout << endl;

    // Instantiate Truck class and test the displayInfo() member function.
    Truck testTruck(usrManufacturer, usrYear, usrTowingCapacity);
    testTruck.displayInfo();

    return 0;
}