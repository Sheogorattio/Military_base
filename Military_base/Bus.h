#pragma once
#include"Vehicle.h"
class Bus:public Vehicle
{
	int max_people;
	int people;
public:
	Bus(int _people, int _max_people, double petrol, double max_petrol);
	int getPeopleCount();// -получить текущее количество пассажиров(водитель в это число не входит);
	int getMaxPeople();// -получить количество пассажирских мест;
	void setPeopleCount(int p);
	void setMaxPeople(int p);
	void arrive(Base& obj);// -приехать на базу;
	bool leave(Base& obj);// -залить полный бак и покинуть базу; в случае невозможности уехать возвращает false;
};

