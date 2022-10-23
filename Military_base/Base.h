#pragma once
class Base
{
	static int people_on_base;// -���������� ����� �� ���������� ����;
	static int vehicles_on_base;// -���������� ������������ ������� �� ���������� ����;
	static double petrol_on_base;// -���������� ������� �� ������� "��������" (� ������);
	static double goods_on_base;// -���������� "�����" - ��������� ������������ ���������(� ������).
public:
	Base() = default;

	static int getPeopleOnBase();
	static void setPeopleOnBase(int p);

	static int getVehiclesOnBase();
	static void setVehiclesOnBase(int v);

	static double getPetrolOnBase();
	static void	setPetrolOnBase(double p);

	static double getGoodsOnBase();
	static void setGoodOnBase(double g);
};

