#include "Vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume)
{
	setTankVolume(tank_volume);
	setPetrolAmount(petrol_amount);	
}

double Vehicle::getTankVolume()
{
	return tank_size;
}

double Vehicle::getPetrolAmount()
{
	return	fuel;
}

void Vehicle::setTankVolume(double t)
{
	if (t < 0 || t < fuel) {
		throw "tank volume is wrong\n";
	}
	tank_size = t;
}

void Vehicle::setPetrolAmount(double p)
{
	if (p<0 || p> tank_size) {
		throw "petrol volume is wrong\n";
	}
	fuel = p;
}

void Vehicle::arrive(Base& obj)
{
	setPetrolAmount(getPetrolAmount() * 0.4);
	obj.setPeopleOnBase(obj.getPeopleOnBase() + 1);
	obj.setVehiclesOnBase(obj.getVehiclesOnBase() + 1);
}

bool Vehicle::leave(Base& obj)
{
	if (obj.getPeopleOnBase() == 0) {
		return false;
	}
	obj.setPeopleOnBase(obj.getPeopleOnBase() - 1);
	if (obj.getVehiclesOnBase() == 0) {
		return false;
	}
	obj.setVehiclesOnBase(obj.getVehiclesOnBase() - 1);
	if ((getTankVolume() - getPetrolAmount()) > obj.getPetrolOnBase()) {
		return false;
	}
	obj.setPetrolOnBase(obj.getPetrolOnBase() - (getTankVolume() - getPetrolAmount()));
	setPetrolAmount(getTankVolume());
	return true;
}
