#include <iostream>
#include <string>

using namespace std;

class car {

public:
	string make;
	string model;
	int yearBuilt;
	int year;
	void setMake(string);
	void setModel(string);
	void setyearBuilt(int);
	string getMake();
	string getModel();
	int getyearBuilt();

	void carInfo(string make, string model, int yearBuilt);
	void Print() {
		std::cout << "Make: " << make << std::endl << "Model: " << model << std::endl << "Year Built: " << yearBuilt << std::endl;
	};
};