#include <iostream>
using namespace std;


void length_input(int& feet, int& inches);
double conversion(int feet, int inches);
void conversion_output(double num);

int main() {
	
	char ans;
	int a, b;
	
	do {
		double res;

		length_input(a, b);

		res = conversion(a, b);

		conversion_output(res);

		cout << endl;
	
		cout << "If you want to exit enter $ sign or enter any other value to continue: " << endl;
		cin >> ans;
		cout << endl;

	} while (ans != '$');
	
	return 0;
}

void length_input(int& num1, int& num2) {


	cout << "Please enter two values, one in feet and the other in inches: \n";

	cin >> num1 >> num2;

	cout << endl;
}

double conversion(int feet, int inches){
	    double total_feet, meters = 0 ;
	
	
		total_feet = static_cast<double> (feet) + (inches / 12.0);
		meters = total_feet * 0.3048;
		
		return meters;
}
void conversion_output(double num) {
	double meter2 = 0, centi = 0;
	


	if (num > 1) {
		meter2 = static_cast<int> (num);
		centi = (num - meter2) * 100;

		cout << "You have " << meter2 << " meters and " << centi << " cenitmeters \n";
	}
	else {
		centi = num * 100;
		cout << "You have " << meter2 << " meters and " << centi << " cenitmeters \n";
	}


}