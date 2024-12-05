#include <iostream>
#include "manipulate.h"

using namespace std;

const int SIZE = 3;

int main(){

	int numbers [SIZE][SIZE] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	printArray(numbers, SIZE);

/*
	cout << "\n" ;
	transpose(numbers, SIZE);
*/
	return 0;
}