#pragma once
#include"Vehicle.h"
class Truck:public Vehicle
{
	double max_weight;
	double weight;
public:
	Truck(double load, double max_load, double petrol, double max_petrol);
	double getCurrentLoad();// -получить текущую загруженность машины(масса груза в тоннах);
	double getMaxLoad();// -узнать максимальную вместительность(грузоподъемность) машины;
	void setCurrentLoad(double l);
	void setMaxLoad(double l);
	void arrive(Base& obj);// -приехать на базу;
	bool leave(Base& obj);// -залить полный бак и покинуть базу; в случае невозможности уехать возвращает false;
};
