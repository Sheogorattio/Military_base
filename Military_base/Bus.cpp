#include "Bus.h"

Bus::Bus(int _people, int _max_people, double petrol, double max_petrol):Vehicle(petrol, max_petrol)
{
	setMaxPeople(_max_people);
	setPeopleCount(_people);
}

int Bus::getPeopleCount()
{
	return people;
}

int Bus::getMaxPeople()
{
	return max_people;
}

void Bus::setPeopleCount(int p)
{
	if (p > max_people || p < 0) {
		throw "people count value is wrong\n";
	}
	people = p;
}

void Bus::setMaxPeople(int p)
{
	if (p < 0 || p < people) {
		throw "incorrect max people value\n";
	}
	max_people = p;
}

void Bus::arrive(Base& obj)
{
	Vehicle::arrive(obj);
	obj.setPeopleOnBase(obj.getPeopleOnBase() + getPeopleCount());
	setPeopleCount(0);
}

bool Bus::leave(Base& obj)
{
	bool check = Vehicle::leave(obj);
	if (check == false) {
		return false;
	}

	if (obj.getPeopleOnBase() ==0) {
		return false;
	}
	if (obj.getPeopleOnBase() >= getMaxPeople()) {
		obj.setPeopleOnBase(obj.getPeopleOnBase() - getMaxPeople());
		setPeopleCount(getMaxPeople());
	}
	else {
		setPeopleCount(obj.getPeopleOnBase());
		obj.setPeopleOnBase(0);
	}
	return true;
}
