// Justin This
// CIS 1202 501
// November 24, 2023
// Car class specification file.
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Car : public Vehicle {
private:
    int doors;  // Number of doors the car has.

public:
    // Constructors
    Car();
    Car(string, int, int);

    // Mutators
    void setDoors(int);

    // Accessors
    int getDoors() const;

    void displayInfo() const;
};
#endif