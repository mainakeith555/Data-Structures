#include <iostream>
#include <iomanip>
using namespace std;

/* This program calculates and prints the net pay for an employee*/

// These are the variable declarations defined on a global scale.
const double FEDERAL_INCOME_TAX_RATE = 0.15;
const double STATE_INCOME_TAX_RATE = 0.05;
const double SOCIAL_SECURITY_TAX_RATE = 0.05;
const double MEDICARE_MEDICAID_RATE = 0.03;
const double PENSION_PLAN_RATE = 0.08;
const double HEALTH_INSURANCE_COST = 125.00;
double federal_tax;
double state_tax;
double social_security_tax;
double medicare_medicad;
double pension_plan;
double net_pay;



int main() {
	/*The program will ask the employee to input their employee ID, and their earning(gross amount) for the current month. The output will be the net pay, after deductions formated to two decimal places*/

	// This block of code ensures that our results are displayed in two decimal places.

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// variable declaration with local scope.
	int employee_ID;
	double gross_earnings;

	/*This part asks the user to input his emloyee ID and his/her gross earnings*/
	cout << "Please enter your employee ID" << endl;
	cin >> employee_ID;

	cout << "Please enter your gross earnings" << endl;
	cin >> gross_earnings;
	
	//This part calculates the employees taxes.

	while (gross_earnings > 0) {

		federal_tax = gross_earnings * FEDERAL_INCOME_TAX_RATE;
		state_tax = gross_earnings * STATE_INCOME_TAX_RATE;
		social_security_tax = gross_earnings * SOCIAL_SECURITY_TAX_RATE;
		medicare_medicad = gross_earnings * MEDICARE_MEDICAID_RATE;
		pension_plan = gross_earnings * PENSION_PLAN_RATE;

		/*This portion subtracts the taxesand health insurance from the gross pay to give us the net pay.
		The program calculate the tax and net pay correctly, however, am not abe to figure out how to align the numbers correctly for any figures larger or less than four integer numbers */

		net_pay = gross_earnings - federal_tax - state_tax - social_security_tax - medicare_medicad - pension_plan - HEALTH_INSURANCE_COST;

		net_pay++;
	

		cout << "Employee ID:" << setw(32) << employee_ID << right  <<endl;
		cout << "----------------------------------------------" << endl;
		cout << "EARNINGS" << setw(29) << "$ ";
		cout <<  gross_earnings << endl;
		cout << "Federal Tax" << setw(33);
		cout << federal_tax << endl;
		cout << "State Tax" << setw(35);
		cout << state_tax << endl;
		cout << "Social Security" << setw(29);
		cout << social_security_tax << right << endl;
		cout << "Mediacre/Medicad" << setw(28);
		cout << medicare_medicad << right << endl;
		cout << "Pension Plan" << setw(32);
		cout << pension_plan << right << endl;
		cout << "Health Insurance" << setw(28);
		cout << HEALTH_INSURANCE_COST << right << endl;
		cout << "---------------------------------------------" <<endl;
		cout << "NET PAY" << setw(30);
		cout << right << "$ " << net_pay << endl;

		return 0;

	}

}
