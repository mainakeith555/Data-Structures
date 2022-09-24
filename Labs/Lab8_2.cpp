#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 20;
void printArray(int arr[], int size);
void printArrayReverse(int arr[], int size);

int min(int arr[], int size);
int max(int arr[], int size);

int main() {
	srand(static_cast<unsigned int>(time(0)));
	
	int arr[SIZE];
	int a = 100, b = 200;

	for (int i = 0; i < SIZE; i++) {

		 arr[i] = rand()% (b - a + 1) + a;

	}
	

	printArray(arr, SIZE);
	printArrayReverse(arr, SIZE);

	cout << "Max value of the array: " << max(arr, SIZE) << endl;
	cout <<"Min value of the array: "  << min(arr, SIZE) << endl;
	
	

	return 0;

}

void printArray(int arr[], int size){

	for (int i = 0; i < size; i++) {
		if (i == 0) {
			cout << "Random Array: [" << arr[i] << " ";
		}
		else if (i == size - 1) {
			cout << arr[i] << "]" << endl;
		}
		else {
			cout << arr[i] << " ";
		}
	
	}

}

void printArrayReverse(int arr[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		if (i == size - 1) {
			cout << "Random Array In Reverse Order: [" << arr[i] << " ";
		}
		else if (i == 0) {
			cout << arr[i] << "]" << endl;
		}
		else {
			cout << arr[i] << " ";
		}

	}
}

int max(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}
int min(int arr[], int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	return min;
}