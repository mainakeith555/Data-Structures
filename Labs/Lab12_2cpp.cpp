#include <iostream>
using namespace std;


class Employee {

public:
	Employee(string new_name, string new_ssn);
	Employee();

	void change_name(string new_name);
	void change_ssn(string new_ssn);

	string get_name();
	string get_ssn();

	void print_info();


private:
	string name;
	string ssn;
};

class HourlyEmployee : public Employee {

public:
	HourlyEmployee(string new_name, string new_ssn);
	HourlyEmployee();

};

class SalariedEmployee : public Employee {

public:
	SalariedEmployee(string new_name, string new_ssn);
	SalariedEmployee();

};




int main() {
	Employee emp("John Doe", "123456789");
	emp.print_info();
	cout << endl;

	HourlyEmployee hemp("William Ford", "222334444");
	cout << "Name: " << hemp.get_name() << endl;
	cout << "SSN: " << hemp.get_ssn() << endl;
	cout << endl;

	SalariedEmployee semp;

	semp.change_name("Helen Drew");
	semp.change_ssn("321654879");
	semp.print_info();
	



	return 0;
}
HourlyEmployee::HourlyEmployee(string new_name, string new_ssn) : Employee(new_name, new_ssn){

}
HourlyEmployee::HourlyEmployee() : Employee() {

}

SalariedEmployee::SalariedEmployee(string new_name, string new_ssn) : Employee(new_name, new_ssn) {

}

SalariedEmployee::SalariedEmployee() : Employee() {

}


 
Employee::Employee(string new_name, string new_ssn) {

	name = new_name;
	ssn = new_ssn;

}

Employee::Employee() {
	
}

void Employee::change_name(string new_name) {
	name = new_name;

}
void Employee::change_ssn(string new_ssn) {
	ssn = new_ssn;
}

string Employee::get_name() {

	return name;
}
string Employee::get_ssn() {

	return ssn;
}

void Employee::print_info() {

	cout << "Name: " << name << endl;
	cout << "SSN: " << ssn << endl;
}
