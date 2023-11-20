// Truck class specification file.
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Truck : public Vehicle {
private:
    double towingCapacity;

public:
    // Constructors
    Truck();
    Truck(string, int, double);

    // Mutators
    void setTowingCapacity(double);

    // Accessors
    double getTowingCapacity() const;

    void displayInfo() const;
};
#endif