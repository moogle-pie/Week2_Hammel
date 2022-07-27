#include "Base.h"
//Design a truck class that inherits from the car class.
//The truck class shall include information about the cargo size in cubic feet and the maximum cargo weight.
//Create a print method that overrides the print method in the base class.
//This method shall only output the model of the truck, cargo size in cubic feetand maximum cargo weight.

class Truck : public car {  	
public:
	int cargoSize;
	int maxCargoWgt;
	string model;
	void carInfo(string make, string model, int yearBuilt, int cargoSize, int maxCargoWgt) {
	};
	void printTruck() {
		std::cout << "Truck model: " << model << std::endl << "Cargo size: " << cargoSize << "cubic ft." << std::endl << "Max Cargo Weight: " << maxCargoWgt << std::endl;
	}
};
