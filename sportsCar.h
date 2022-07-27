#include "Base.h"
//The sports car class shall take in the same information as the base class 
//but will also include the top speed of the sports carand its zero to 60 MPH time in seconds.
// The sports car class shall override the base function print method.
//The override print method shall display make, model, year built, top speed, and zero to 60 time.

class sportsCar : public car {  	//Design a sports car class that inherits from the car class.
public:
	int topSpeed;
	double ztoSixty;
	void carInfo(string make, string model, int yearBuilt, int topSpeed, double ztoSixty) {
	};

	void printSC() {
		std::cout << "SC make: " << make << "SC model: " << model << std::endl << "Year Built: " << yearBuilt << std::endl << "Top Speed: " << topSpeed << "Zero to 60: " << ztoSixty << std::endl;
	}


};