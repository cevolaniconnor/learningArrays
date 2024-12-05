#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void printArray(int array[], int size){
	//printed out the array using a for each loop
	for(int i = 0;i < size; i++){
		cout << array[i] << " " << endl;
	}
}

int sumOfArray(int array[], int size){
	int total = 0;

	for(int i = 0;i < size; i++){
		total += array[i];
	}
	return total;
}

void reverse(int array[], int size){
	//The hard way
	int temp;
	for (int i = 0; i < size / 2; ++i)
	{
	  temp = array[i];
	  array[i] = array[size-i-1];
	  array[size-i-1] = temp;
	}

}

int main(){

	//Part 1
	//Initialized the array

	const int SIZE = 5;
	int numbers[SIZE] = {0, 1, 2, 4, 8};

	printArray(numbers, SIZE);

	//Part 2
	//Finding the sum of all the numbers

	//Finding largest number in the array
	cout << "The biggest number is: " << *max_element(begin(numbers), end(numbers)) << endl;

	//Finding the smallest number in the array
	cout << "The smallest number is: " << *min_element(begin(numbers), end(numbers)) << endl;

	reverse(numbers, SIZE);
	printArray(numbers, SIZE);

	return 0;
}