#pragma once
#include <iostream>
#include"Base.h"
#include"Bus.h"
#include"Truck.h"
#include"Vehicle.h"
using namespace std;
int printMenu(Base& obj) {
	cout << "People:\t" << obj.getPeopleOnBase() << endl;
	cout << "Vehicles:\t" << obj.getVehiclesOnBase() << endl;
	cout << "Petrol:\t" << obj.getPetrolOnBase() << " l" << endl;
	cout << "Goods:\t" << obj.getGoodsOnBase() << " t" << endl << endl;

	cout << "1.Leave\n2.Arrive\n3.Exit\n";
	int choise;
	cin >> choise;
	if (choise > 3 || choise < 1) {
		throw "incorrect type of action\n";
	}
	return choise;
}

void action(int choise, Base& obj) {
	if (choise == 3) exit(0);
	Vehicle* transp = nullptr;
	cout << "1.Bus\n2.Truck\n";
	int transport;
	double petrol, max_petrol;
	cin >> transport;
	cout << "enter next values:\ncurrent petrol\nmax petrol\n";
	switch (transport)
	{
	case 1://bus
	{
		int people = 0, max_people = 0;
		cout << "people number\nmax_people\n";
		cin >> petrol >> max_petrol >> people >> max_people;
		choise == 1 ? people = 0 : people = people;
		transp = new Bus(people, max_people, petrol, max_petrol);
		break;
	}
	case 2://truck
	{
		int load = 0, maxLoad = 0;
		cout << "load val\nmax_load val\n";
		cin >> petrol >> max_petrol >> load >> maxLoad;
		choise == 1 ? load = 0 : load = load;
		transp = new Bus(load, maxLoad, petrol, max_petrol);
		break;
	}
	default:
		throw "incorrect type of vechicle\n";
		break;
	}
	switch (choise)
	{
		case 1:
			transp->leave(obj);
			break;
		case 2:
			transp->arrive(obj);
		default:
			break;
	}
	delete transp;
}
