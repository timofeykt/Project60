#include <iostream>
#include <string>
using namespace std;

class Bus {
public:
	string brand;
	string number;
	int prise;
	int count;
	Bus() {}

	Bus(string brand, string number, int prise, int count) :
		brand(brand), prise(prise), number(number), count(count) {}

	string convert() {
		return brand + ": number = " + number + ", prise = " + to_string(prise) + ", count = " + to_string(count);

	}






};