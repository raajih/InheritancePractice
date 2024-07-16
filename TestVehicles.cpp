//Raajih Roland
//CIS 1202.5T1
//July 16, 2024
#include "Truck.h"
#include "Car.h"

int main()
{
	//Declare all variables
	string manufacturer;
	int year, numDoors;
	double towingCap;
	
	//Get info for vehicle
	cout << "----------VEHICLE----------\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	
	//Create vehicle object
	Vehicle vehicle (manufacturer, year);
	vehicle.displayInfo();
	
	//Get info for car object
	cout << "\n----------CAR----------\n"
		<< "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Number of doors: ";
	cin >> numDoors;

	Car car(manufacturer, year, numDoors);//Create car object
	car.displayInfo();

	//Get info for truck object
	cout << "\n----------Truck----------\n"
		<< "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Towing capacity: ";
	cin >> towingCap;

	Truck truck(manufacturer, year, towingCap);//Create truck object
	truck.displayInfo();

	return 0;
}