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
	double getTankVolume();// -������ ����� ��������� � ������;
	double getPetrolAmount();// -������ ������� ���������� ������� � ����;
	void setTankVolume( double t);
	void setPetrolAmount( double p);
	virtual void arrive(Base& obj);// -�������� �� ����;
	virtual bool leave(Base& obj);// -������ ������ ��� � �������� ����; � ������ ������������� ������ ���������� false;
};