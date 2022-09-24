#include <iostream>
using namespace std;

const int SIZE = 10;

void printArr(int arr[], int size=10);

int main() {

	int array[SIZE], sum = 0, sum2 = 0;

	cout << "Enter 10 numbers. " << endl;
	for (int i = 0; i < SIZE; i++) {

		cin >> array[i];

	}

	printArr(array, SIZE);
	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			sum += array[i];
		}
		else {
			sum2 += array[i];
		}
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Average of even indexed elements: " << sum / 5.0 << endl;
	cout << "Average of odd indexed elements: " << sum2 / 5.0;

	return 0;

}

void printArr(int arr[], int size) {
	for (int i = 0; i < SIZE; i++) {

		cout << "array[" << i << "]: " << arr[i] << endl;

	}



}