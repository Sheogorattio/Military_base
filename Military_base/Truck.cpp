#include "Truck.h"

Truck::Truck(double load, double max_load, double petrol, double max_petrol) :Vehicle(petrol, max_petrol)
{
    setMaxLoad(max_load);
    setCurrentLoad(load);
}

double Truck::getCurrentLoad()
{
    return weight;
}

double Truck::getMaxLoad()
{
    return max_weight;
}

void Truck::setCurrentLoad(double l)
{
    if (l<0 || l> max_weight) {
        throw "current load valuse is incorrect\n";
    }
    weight = l;
}

void Truck::setMaxLoad(double l)
{
    if (l < 0 || l < weight) {
        throw "max load valuse is incorrect\n";
    }
    max_weight = l;
}

void Truck::arrive(Base& obj)
{
    Vehicle::arrive(obj);
    obj.setGoodOnBase(obj.getGoodsOnBase() + getCurrentLoad());
    setCurrentLoad(0);
}

bool Truck::leave(Base& obj)
{
    bool check = Vehicle::leave(obj);
    if (check == false) {
        return false;
    }

    if (obj.getGoodsOnBase() == 0) {
        return false;
    }
    if (obj.getGoodsOnBase() >= getCurrentLoad()) {
        obj.setGoodOnBase(obj.getGoodsOnBase() - getMaxLoad());
        setCurrentLoad(getMaxLoad());
    }
    else {
        setCurrentLoad(obj.getGoodsOnBase());
        obj.setGoodOnBase(0);
    }
    return true;
}
