#include"Base.h"
#include"Vehicle.h"
#include"Bus.h"
#include"Truck.h"
#include"functions.h"
int main() {
	try {
		Base base;
		base.setPetrolOnBase(10000);
		while (true) {
			system("cls");
			action(printMenu(base), base);
		}
	}
	catch (const char* c) {
		cout << c;
	}
}