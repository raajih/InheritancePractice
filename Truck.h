#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	double towingCapacity;

public:
	Truck();
	Truck(string, int, double);
	double getTowingCapacity() const;
	void setTowingCapacity(double);
	void displayInfo() const;
};

#endif