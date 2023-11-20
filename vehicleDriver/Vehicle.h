#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

// Vehicle class. Will be used to create derived classes.
class Vehicle {
protected:
    string manufacturer;    // Manufacturer name.
    int year;               // Model year.

public:
    // Constructors
    Vehicle();
    Vehicle(string, int);

    // Mutators
    void setManufacturer(string);
    void setYear(int);

    // Accessors
    string getManufacturer() const;
    int getYear() const;

    void displayInfo() const;
};
#endif