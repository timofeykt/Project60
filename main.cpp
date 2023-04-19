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

int main() {
	const int SIZE = 10;
	Bus buses[SIZE];
	buses[0] = Bus("MAZ", "1234QW7", 10000, 23);
	buses[1] = Bus("Mercedes Benz", "2345ER7", 125000, 58);
	buses[2] = Bus("Neoplan", "3456TY7", 56000, 31);
	buses[3] = Bus("MAN", "4567UI7", 35000, 26);
	buses[4] = Bus("Scania", "5678PA7", 67000, 49);
	buses[5] = Bus("Volvo", "6789SD7", 45000, 47);
	buses[6] = Bus("Scania", "7890GH7", 49000, 48);
	buses[7] = Bus("MAZ", "8901HJ7", 12000, 13);
	buses[8] = Bus("Neoplan", "9012KL7", 123000, 67);
	buses[9] = Bus("Volvo", "0123ZX7", 15000, 21);
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j  = 0; j < SIZE - 1; j++)
		{
			if (buses[i].prise / buses[i].prise < buses[i + 1].prise / buses[i + 1].prise)
			{
				Bus temp = buses[i];
				buses[i] = buses[i + 1];
				buses[i + 1] = temp;
			
					
			}

		}  
	}

	for (int i = 0; i < SIZE - 1; i++) {
		cout << buses[i].convert() << " --> "  << endl;
	}

	// call business logic

	// ouput result

	return 0;
}

