#ifndef Q3_H
#define Q3_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
	unsigned short year;
	unsigned int mileage;

public:
	unsigned short getYear() {return this->year;}
	void setYear(unsigned short year) {this->year = year;}
	unsigned int getMileage() {return this->mileage;}
	void setMileage(unsigned int mileage) {this->mileage = mileage;}

	virtual void move() = 0;
};

// Declare your Car class here

#endif
