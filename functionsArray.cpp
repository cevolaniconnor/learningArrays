#include "manipulate.h"
#include <iostream>

using namespace std;

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

void sumOfRows(int array[][3], int size){

	int rowTotal = 0;

	for(int r; r < size; r++){
		rowTotal = 0;
		for(int c = 0; c < size; c++){
			rowTotal += array[r][c];
		}
		cout << rowTotal << endl;
	}
}
