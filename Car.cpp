#include "Car.h"


Car::Car() : Vehicle()
{
	numDoors = 0;
}

Car::Car(string make, int year, int doors) : Vehicle(make, year)
{
	numDoors = doors;
}

int Car::getNumDoors() const
{
	return numDoors;
}

void Car::setNumDoors(int doors)
{
	numDoors = doors;
}

void Car::displayInfo() const
{
	Vehicle::displayInfo();//Call base class display info first
	cout << "Number of doors: " << numDoors << "\n";
}