// Vehicle class implementation file.
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Vehicle::Vehicle() : manufacturer(""), year(0) {}

// Constructor
Vehicle::Vehicle(string m, int y) {
    manufacturer = m;
    year = y;
}

// Mutators
void Vehicle::setManufacturer(string m) {
    manufacturer = m;
}

void Vehicle::setYear(int y) {
    year = y;
}

// Accessors
string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYear() const {
    return year;
}

/* displayInfo member function. The function takes no arguments and displays the
 * information for an instance of the Vehicle class to cout.
 */
void Vehicle::displayInfo() const {
    cout << "~*~*~*Vehicle Information*~*~*~\n";
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Year: " << getYear() << endl;
}