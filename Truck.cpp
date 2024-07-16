#include "Truck.h"

Truck::Truck() : Vehicle()//default constructor
{
	towingCapacity = 0;
}

Truck::Truck(string make, int year, double capacity) : Vehicle(make, year)
{
	towingCapacity = capacity;
}

double Truck::getTowingCapacity() const
{
	return towingCapacity;
}

void Truck::setTowingCapacity(double capacity)
{
	towingCapacity = capacity;
}

void Truck::displayInfo() const
{
	Vehicle::displayInfo();//Call base class display info
	cout << "Towing capacity: " << towingCapacity << "\n";
}