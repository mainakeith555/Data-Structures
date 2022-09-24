#include <iostream>
using namespace std;



double max(double num1, double num2);
double max(double num1, double num2, double num3);
double max(double num1, double num2, double num3, double num4);


int main() {
	double result;

	result = max(10.2, 20.0);
	cout << "Max(10.0, 20.0) = " << result << endl;
	result = max(11.5, 21., 5.3);
	cout << "Max(11.5, 21., 5.3) = " << result << endl;
	result = max(1.8, 2.2, 1.7, 2.1);
	cout << "Max(1.8, 2.2, 1.7, 2.1) = " << result << endl;


	return 0;

}

double max(double num1, double num2) {
	
	if (num1 < num2) {
		return num2;
	}
	return num1;
}
double max(double num1, double num2, double num3) {
	

	return max(max(num1, num2), num3);
}
double max(double num1, double num2, double num3, double num4) {

	return max(max(num1, num2, num3), num4);
}