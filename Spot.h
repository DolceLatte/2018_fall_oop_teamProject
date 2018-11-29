#ifndef SPOT_H
#define SPOT_H
#include "Passenger.h"
#include <vector>
#include <iostream>
#include <string>

class Spot {
public:
	Spot(string startSpot);
	bool addPassenger(Passenger* addedPassenger);
	bool removePassenger(Passenger* removedPassenger);
	Passenger* getPassengers(string passengerName);
	Passenger* getPassengers(int i);
	Passenger* getPassengersByNum(int userNum);
	void setStartSpot(string name);
	string getStartSpot();
	int getNumOfPassengers();
	bool check(Passenger* added);

private:
	string startSpot;
	vector<Passenger> passengers;
};
#endif