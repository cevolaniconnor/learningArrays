#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

const int SIZE = 3;

void printArray(int array[][3], int size){
	for(int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)
		{
			cout << array[i][j] << "   ";
		}
		cout << endl;
	}
}

void transpose(int array[][3], int size){

	int copy[size][size];

	for(int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)
		{
			copy[j][i] = array[i][j];
		}
	}
	for(int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)
		{
			cout << copy[i][j] << "   ";
		}
		cout << endl;
	}
}

int main(){

	int copy[SIZE][SIZE];
	int numbers [SIZE][SIZE] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	printArray(numbers, SIZE);

	int rows = 
	cout << "\n" ;
	transpose(numbers, SIZE);

	return 0;
}