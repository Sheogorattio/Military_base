#pragma once
#include"Vehicle.h"
class Truck:public Vehicle
{
	double max_weight;
	double weight;
public:
	Truck(double load, double max_load, double petrol, double max_petrol);
	double getCurrentLoad();// -�������� ������� ������������� ������(����� ����� � ������);
	double getMaxLoad();// -������ ������������ ���������������(����������������) ������;
	void setCurrentLoad(double l);
	void setMaxLoad(double l);
	void arrive(Base& obj);// -�������� �� ����;
	bool leave(Base& obj);// -������ ������ ��� � �������� ����; � ������ ������������� ������ ���������� false;
};
