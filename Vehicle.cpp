//Raajih Roland
//CIS 1202.5T1
//July 16, 2024
//IMPLEMENTATION FILE
#include "Vehicle.h"

Vehicle::Vehicle()//Default constructor
{
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(string make, int year)
{
	manufacturer = make;
	yearBuilt = year;
}

void Vehicle::setManufacturer(string make)
{
	manufacturer = make;
}

void Vehicle::setYearBuilt(int year)
{
	yearBuilt = year;
}

string Vehicle::getManufacturer() const
{
	return manufacturer;
}

int Vehicle::getYearBuilt() const
{
	return yearBuilt;
}

void Vehicle::displayInfo() const
{
	cout << "Vehicle Info\n"
		<< "Manufacturer: " << manufacturer
		<< "\nYear built: " << yearBuilt << "\n";
}