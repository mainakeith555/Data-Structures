#include <iostream>
#include<string>

using namespace std;

const int ROWS = 7, COLS = 4;

void initializedArray(char arr[][COLS], int row);
void printArray(char arr[][COLS], int row);
bool inputValidation(int row, int col);
bool seatsFull(char arr[][COLS], int row);


int main() {
	char seats[ROWS][COLS];
	string seat;
	char ans;
	int rowNum = 0 , colNum = 0 ;

	initializedArray(seats, ROWS);
	do {
		cout << "Plane seats layout: \n";

		printArray(seats, ROWS);

		cout << endl;

		cout << "Please enter a seat number(i.e 1A): \n";
		cin >> seat;

		while (!inputValidation(rowNum, colNum)) {
			cout << "Invlaid input. Please try again: \n";
			cin >> seat;

			rowNum = seat.at(0) - '1';
			colNum = seat.at(1) - 'A';
		}

		if (seats[ROWS - 1][COLS] == 'X') {
			cout << "Seat is unavailable. Please check or book again. \n";

		}
		else {
			seats[rowNum][colNum] = 'X';
		}
		cout << "\nHere are the seats available: " << endl;
		printArray(seats, ROWS);
		cout << endl;
		

		if (seatsFull(seats, ROWS)) {
			cout << "Seats are full.\nProgram ends.\n";
			exit(1);
		}
		cout << "Do you want to continue? (y/n): ";
		cin >> ans;
	} while (ans != 'n');
		
	cout << "Program ends." << endl;

	return 0;
}

void initializedArray(char arr[][COLS], int row) {

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = ('A' + j);
		}
	}
	
}

void printArray(char arr[][COLS], int row) {
	for (int i = 0; i < 7; i++) {
		cout << (i + 1) << " ";
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

bool inputValidation(int row, int col) {
	if (row > 7 || row < 0 || col > 4 || col < 0) {
		return false;
	}
	if (row < 7 || row > 0 || col < 4 || col > 0) {
		return true;
	}
}

bool seatsFull(char arr[][COLS], int row) {

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] == 'X') {

				return false;
			}
		
			return true;
		}

	}
}