#include "Base.h"

int Base::people_on_base = 0;
int Base::vehicles_on_base = 0;
double Base::petrol_on_base = 0;
double Base::goods_on_base = 0;

int Base::getPeopleOnBase()
{
    return people_on_base;
}

void Base::setPeopleOnBase(int p)
{
    if (p < 0) {
        throw "people numer is incorrect\n";
    }
    people_on_base = p;
}

int Base::getVehiclesOnBase()
{
    return vehicles_on_base;
}

void Base::setVehiclesOnBase(int v)
{
    if (v < 0) {
        throw "vehicles number is incorrect\n";
    }
    vehicles_on_base = v;
}

double Base::getPetrolOnBase()
{
    return petrol_on_base;
}

void Base::setPetrolOnBase(double p)
{
    if (p < 0) {
        throw "petrol volume is incorrect\n";
    }
    petrol_on_base = p;
}

double Base::getGoodsOnBase()
{
    return goods_on_base;
}

void Base::setGoodOnBase(double g)
{
    if (g < 0) {
        throw "goods volume is incorrect\n";
    }
    goods_on_base = g;
}
