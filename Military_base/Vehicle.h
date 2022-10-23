#pragma once
#include<iostream>
#include"Base.h"
using namespace std;
class Vehicle
{
protected:
	double tank_size;
	double fuel;
public:
	Vehicle(double petrol_amount, double tank_volume);
	double getTankVolume();// -узнать объем бензобака в литрах;
	double getPetrolAmount();// -узнать текущее количество топлива в баке;
	void setTankVolume( double t);
	void setPetrolAmount( double p);
	virtual void arrive(Base& obj);// -приехать на базу;
	virtual bool leave(Base& obj);// -залить полный бак и покинуть базу; в случае невозможности уехать возвращает false;
};