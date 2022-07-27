#include "sportsCar.h"
#include "Truck.h"

int main() {

//Create two truck objects.
//
//For one truck object, set the values through an overloaded constructor.
//For the second set of objects set the values through mutators(setters) and accessors(getters).
	Truck truck;

	truck.carInfo("Ford", "F150", 1998, 50, 200);
	truck.printTruck(); //prints truck info

	sportsCar SC;

	SC.carInfo("Ferrari", "Not Sure", 2002, 200, 3.1);
	SC.printSC();

	return 0;
}