// Car class implementation file.
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Car::Car() : Vehicle() {
    doors = 0;
}

// Constructors
Car::Car(string m, int y, int d) : Vehicle(m, y) {
    doors = d;
}

// Mutators
void Car::setDoors(int d) {
    doors = d;
}

// Accessors
int Car::getDoors() const {
    return doors;
}

/* displayInfo member function. It takes no arguments and displays the
 * information for an instance of the Car class by first calling the 
 * Vehicle::getInfo() member function then adding the information specific to
 * the Car class.
 */
void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Doors: " << getDoors() << endl;
}