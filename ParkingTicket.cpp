#include "PoliceOfficer.h"
#include "ParkingTicket.h"
#include "ParkingMeter.h"
#include "ParkedCar.h"
#include <iostream>

int main(){

	ParkedCar *car = new ParkedCar();
	PoliceOfficer *officer = new PoliceOfficer();
	ParkingMeter *meter = new ParkingMeter();
	ParkingTicket *ticket = new ParkingTicket();

	cout << "Enter car make: " << endl;
	cin >> car->make;
	cout << "Enter car model: " << endl;
	cin >> car->model;
	cout << "Enter car color: " << endl;
	cin >> car->color;
	cout << "Enter license number: " << endl;
	cin >> car->licenseNumber;
	cout << "Enter minutes parked: " << endl;
	cin >> car->mins;
	cout << "Enter minutes purchased: " << endl;
	cin >> meter->parkingMins;

	cout << "Enter Officer Name: " << endl;
	cin >> officer->name;
	cout << "Enter Badge: " << endl;
	cin >> officer->badge;

	bool carExpiration = officer->expired(meter->getParkingMins(), car->getMins());

	if(carExpiration == true){
		ticket->report(*car, *meter, *officer);
	}
	else{
		cout << "You are legally parked!";
	}

}
