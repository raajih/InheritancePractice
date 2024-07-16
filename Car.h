#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	int numDoors;
	
public:
	Car();//Default constructor
	Car(string, int, int);//Takes all parameters
	int getNumDoors() const;
	void setNumDoors(int);
	void displayInfo() const;
};

#endif