// Truck class implementation file.
#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Truck::Truck() : Vehicle() {
    towingCapacity = 0.0;
}

// Constructors
Truck::Truck(string m, int y, double towCap) : Vehicle(m, y) {
    towingCapacity = towCap;
}

// Mutators
void Truck::setTowingCapacity(double towCap) {
    towingCapacity = towCap;
}

// Accessors
double Truck::getTowingCapacity() const {
    return towingCapacity;
}

/* displayInfo member function. It takes no arguments and displays the
 * information for an instance of the Truck class by first calling the
 * Vehicle::getInfo() member function then adding the information specific to
 * the Truck class.
 */
void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << getTowingCapacity() << endl;
}