#include <iostream>
#include <string>

using namespace std;

struct Date {

	int month;
	int day;
	int year;
};

struct Person {
	string first_name;
	string last_name;
	int age;
	Date birthday;
};

int calculateAge(Person, Date);
void printInfo(Person);

int main() {
	
	Person p;
	Date today = { 4, 27, 2022 };

	cout << "Please enter your first name \n";
	cin >> p.first_name;

	cout << "Please enter your last name \n";
	cin >> p.last_name;
	cout << "Please enter your birth month, day and year in that order \n";
	cin >> p.birthday.month >> p.birthday.day >> p.birthday.year;

	
	p.age = calculateAge(p, today);
	cout << endl;
	printInfo(p);
	

}

int calculateAge(Person p, Date d) {
	int age;

	age = d.year - p.birthday.year;

	

	if (d.month < p.birthday.month) {

		age--;
		
	}

	else if (d.month == p.birthday.month) {
		if (d.day < p.birthday.day) {

			age--;
			
		}
	}
	
	
	return age;
}

void printInfo(Person p) {

	cout << "Name: " << p.first_name << " " << p.last_name << endl;
	cout << "Age: " << p.age << endl;

}