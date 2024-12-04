#include <iostream>

using namespace std;

int main(){

	string cars[4] = {"Porsche", "BMW", "Audi", "Bentley"};

	int length = sizeof(cars) / sizeof(cars[0]);

	cout << length << endl;

	for (string vechicle: cars){
		cout << vechicle << endl;
	}

	return 0;
}