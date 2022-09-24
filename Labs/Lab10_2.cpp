#include <iostream>
#include <cstring>

using namespace std;

void printArray(string* dynamicArray, const int size);
string* addEntry(string* dynamicArray, int& size, string newentry);
string* deleteEntry(string* dynamicArray, int& size, string entryToDelete);

typedef string* Inprt;


int main() {
	int ans, size = 3;
	string new_name;
	Inprt names;
	names = new string[size];

	names[0] = "Mike";
	names[1] = "John";
	names[2] = "Dan";
	

	cout << "A list of names: \n";
	printArray(names, size);
	cout << endl;

	do {
		cout << endl;
		cout << "1. Add a new name. \n";
		cout << "2. Remove a name. \n";
		cout << "3. Quit.\n";
		
		cout << "Please pick from the above menu to add, remove or quit: ";
		cin >> ans;
		cout << endl;

		if (ans == 1) {
			cout << "Please enter a new name to be added. \n";
			cin >> new_name;
			names = addEntry(names, size, new_name);
			cout << endl;

			cout << "A list of names: \n";
		}
		else if (ans == 2) {
			cout << "Please enter a names to be removed: \n";
			cin >> new_name;
			names= deleteEntry(names, size, new_name);
		}
		printArray(names, size);
		


	} while (ans == 1 || ans == 2 );
	
	

	return 0;
}

string* addEntry(string* dynamicArray, int& size, string newentry) {



	Inprt n;
	n = new string[size + 1];
	for (int index = 0; index < size; index++) {

		n[index] = dynamicArray[index];
	}

	n[size] = newentry;

	size++;

	delete[] dynamicArray;

	return n;
}

void printArray(string* dynamicArray, const int size) {

	for (int index = 0; index < size; index++) {
		cout << dynamicArray[index] << " ";
		
	}

}

string* deleteEntry(string* dynamicArray, int& size, string entryToDelete) {
	Inprt new_arr;
	int indexToDelete;
	new_arr = new string[size - 1];

	for (int index = 0; index < size; index++) {
		if (dynamicArray[index] == entryToDelete) {

			indexToDelete = index;
	
			break;
		}

	}

	for (int index = 0; index < indexToDelete; index++) {

		new_arr[index] = dynamicArray[index];

	}

	for (int index = indexToDelete + 1; index < size; index++) {

		new_arr[index - 1] = dynamicArray[index];
	}
	size--;
	delete[] dynamicArray;

	return new_arr;
}
