#include <iostream>
#include <math.h>

using namespace std;

double num1, num2, num3, num4, num5, num6, num7;
double absolute_num1;

int main() {
	double power, square_root, upper_round_off, lower_round_off, round_off;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//asking the user to input three numbers, double num1, num2, num3, num4, num5, num6.
	cout << "Please enter a number one that you would like to get the absolute value of: " << endl;
	cin >> num1;
	cout << endl;

	cout << "Please enter two numbers. The results will be a calculation of the first number raised to the power of the second number: " << endl;

	cin >> num2 >> num3;


	power = pow(num2, num3);
	cout << endl;

	cout << "Please enter a number to get the square root of: " << endl;
	cin >> num4;
	square_root = sqrt(num4);
	cout << endl;
	

	cout << "Please enter an number with at least two decimal places that you wish to round up to the nearest integer: \n";
	cin >> num5;
	upper_round_off = ceil(num5);
	cout << endl;

	cout << "PLease enter a number that has at least two decimal places that you would like to round down to the nearest integer: \n";
	cin >> num6;
	lower_round_off = floor(num6);
	cout << endl;

	cout << "Please enter a number with at least two decimal places, the number will be rounded off to the nearest integer: \n";
	cin >> num7;
	round_off = round(num7);
	cout << endl;

	cout << "The first number raised to the power of the second number is: " << power << endl;
	cout << endl;
	cout << "The  square root of  " << num4 <<" is " << square_root << endl;
	cout << "The  upper round off of  " << num5 << " is " << upper_round_off << endl;
	cout << "The  lower round off of " << num6 << " is " << lower_round_off << endl;
	cout << "Rounding  " << num7 << "  to the nearest integer is " << round_off << endl;

}