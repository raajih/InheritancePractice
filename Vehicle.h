//Raajih Roland
//CIS 1202.5T1
//July 16, 2024
//SPECIFICATION FILE

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;


class Vehicle
{
private:
	//Member variables
	string manufacturer;
	int yearBuilt;

public:
	Vehicle();//Default constructor
	Vehicle (string, int);//Constructor with paramters for manufacturer and year built
	void setManufacturer(string);
	void setYearBuilt(int);
	string getManufacturer() const;
	int getYearBuilt() const;
	void displayInfo() const;
};


#endif