#include <iostream>
using namespace std;

void draw_triangle(int num1);

int main() {
	int number1, number2;

	cout << "How many triangle do you want to draw? \n";
	cin >> number2;
	for (int i = 0; i < number2; i++) {
		cout << "How many strars do you want the last row of the triangle to have? The range should be between 5 and 21. (5 - 21) \n";
		cin >> number1;

		while (number1 < 5 || number1 > 21) {
			cout << "The numbers are out of range, reenter the number.  \n";
			cin >> number1;
		}
		draw_triangle(number1);

	}

	return 0;
}

void draw_triangle(int num1){

	for (int i = 1; i <= num1; i++) {
		for (int j = 1; j <= i; j++) {

			cout << " *";
		}
		cout << endl;
	}

}
