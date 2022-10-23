#pragma once
#include"Vehicle.h"
class Bus:public Vehicle
{
	int max_people;
	int people;
public:
	Bus(int _people, int _max_people, double petrol, double max_petrol);
	int getPeopleCount();// -�������� ������� ���������� ����������(�������� � ��� ����� �� ������);
	int getMaxPeople();// -�������� ���������� ������������ ����;
	void setPeopleCount(int p);
	void setMaxPeople(int p);
	void arrive(Base& obj);// -�������� �� ����;
	bool leave(Base& obj);// -������ ������ ��� � �������� ����; � ������ ������������� ������ ���������� false;
};

