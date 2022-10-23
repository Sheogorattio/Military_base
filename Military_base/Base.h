#pragma once
class Base
{
	static int people_on_base;// -количество людей на территории базы;
	static int vehicles_on_base;// -количество транспортных средств на территории базы;
	static double petrol_on_base;// -количество бензина на местной "заправке" (в литрах);
	static double goods_on_base;// -количество "груза" - различных материальных ценностей(в тоннах).
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

