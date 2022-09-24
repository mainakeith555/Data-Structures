#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Declaring function to be used to calculate the accumulative value.
double accumulative_value();




int main() {

	//calling the function.

	accumulative_value();

}
//This function prompts the user to enter the amount they wish to invest and calculates the accumulated values for three years, prining a table of the values year by year.

double accumulative_value() {

	//local variables declared.

	double investment_amount, interest_rate;

	double monthly_rate, accumulated_value;

	int years = 1;
	
	cout << "Please enter an investment amount: \n";
	cin >> investment_amount;
	cout << endl;

	cout << "Please enter the annual rate of return: \n";
	cin >> interest_rate;
	cout << endl;

	cout << left << setw(20) << "Years" << setw(25) << right << setprecision(2) << fixed << "  Future Value \n";

	// Thhis part ensures the code keeps running until all the conditions inside the while loop are met.

	while (years != 0 && years <= 30) {

		//Calculating the monthly then using that to calculate the accumulated value

		monthly_rate = (1 + ((interest_rate / 100) / 12));

		accumulated_value = pow(monthly_rate, (years * 12)) * investment_amount;

		cout << left << setw(20) << years << setw(20) << right << setprecision(2) << fixed << accumulated_value << endl;

		years++;
	}

	return 0;

}

