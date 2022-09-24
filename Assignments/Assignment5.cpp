#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int ARRAY_SIZE = 50;                   // assume that there are fewer than 50 entries in the arrays
void swap(int& a, int& b);                   // Interchanges the values of a and b
void bubblesortDecrement(int a[], int b[], int size); // Sort the two arrays together
void printArray(int a[], int b[], int size);  // Dispaly the final results


int main() {
	int firstColumn[ARRAY_SIZE]; // holds the elements read from the file without duplicates
	int secondColumn[ARRAY_SIZE]; // holds the corresponding number of occurrences associated with the elements in the firstColumn array
	int	num;  // holds the value read from the file
	int idx = 0; // keep track of the number of values stored in the two arrays above
	bool found;  // a flag variable to check for duplicates

	ifstream input;

	input.open("C:\\Users\\14438\\Dropbox (AEG Environmental)\\My PC (Keith-155KEM85)\\Desktop\\Towson university\\Courses\\Prerequisites\\Data Structures and Algoriths\\Assignment 5\\4331463.txt");

	if (input.fail()) {
		cout << "Failed to open file! Program will terminate!" << endl;
		exit(1);
	}

	while (input >> num) {
		found = false;
		for (int i = 0; i < idx; i++) {
			if (firstColumn[i] == num) {     // if the number read from the file is already in the firstColumn array
				
				secondColumn[i]++;   // Then, just increment the number of occurrences for the number by 1 (using the secondColumn array)
				found = true;
				break;
			}
			
		}
	
		

		if (!found) {     // if the number read from the file is not in the firstColumn array 
			firstColumn[idx] = num;		  // Then, store the number in the firstColumn array

			secondColumn[idx] = 1;		  // Then, set the number of occurrences for the number to 1 (using the secondColumn array)

			idx++;
		}

		if (idx >= 50) {
			cout << "There are more than 50 entries.";

			break;
		}
	}
	

	cout << "Output:\n" << endl;
	printArray(firstColumn, secondColumn, idx);

	bubblesortDecrement(firstColumn, secondColumn, idx);

	cout << "\nOutput after sorting:\n" << endl;
	printArray(firstColumn, secondColumn, idx);



		

	input.close();

	return 0;
}

void swap(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
		
}


void bubblesortDecrement(int a[], int b[], int size) {

	for (int i = size - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] < a[j + 1]) {
				swap(a[j], a[j + 1]);
				swap(b[j], b[j + 1]);
			}
		}
	}
}

void printArray(int a[], int b[], int size) {
	cout << "Numbers" << '\t' << "Count" << endl;
	for (int i = 0; i < size; i++) {
			cout << a[i] << '\t' << b[i] << endl;
		
	}
}