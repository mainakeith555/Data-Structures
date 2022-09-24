#include <iostream>
using namespace std;

int factorial(int num1);

int main() {
	int number, count;
	char ans;

	do {
		cout << "Enter a number between 1 and 8 \n";
		cin >> number;
		cout << endl;

		while (number < 1 || number > 8) {
			cout << "Out of range please reenter the number. \n";
			cin >> number;
			cout << endl;
		}
		cout << "The factorial of " << number << " is " << factorial(number) << endl;
		cout << " If you want to continue enter $ \n";
		cin >> ans;
		
	} while (ans == '$');

}

int factorial(int num1) {

	int fact = 1;

	for (int i = 1; i <= num1; i++) {
		fact = fact * i;

	}
	return fact;
}