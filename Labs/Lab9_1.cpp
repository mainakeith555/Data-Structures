#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void sort_function(string arr[], int length);

int main() {

	ifstream instream;
	string fruits[30];

	instream.open("C:\\Users\\14438\\Dropbox (AEG Environmental)\\My PC (Keith-155KEM85)\\Desktop\\Towson university\\Courses\\Prerequisites\\Data Structures and Algoriths\\Lab 9\\fruits.txt");

	if (instream.fail()) {
		cout << "Input file opening failed \n";
		exit(1);
	}


	for (int i = 0; i < 30; i++) {

		instream >> fruits[i];

	}

	cout << "Before Sorting: \n";
	for (int j = 0; j < 30; j++) {

		
		cout << fruits[j] << " ";


	}
	cout << endl;
	cout << endl;
	cout << "After Sorting: \n";
	sort_function(fruits, 30);

	for (int j = 0; j < 30; j++) {


		cout << fruits[j] << " ";

	}
	
	return 0;
}

void sort_function(string arr[], int length) {

	for (int i = length - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {

				string temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}