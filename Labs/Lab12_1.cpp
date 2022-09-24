#include <iostream>
using namespace std;

class RationalNumber {
public:
	RationalNumber();
	RationalNumber(int num1, int num2);
	RationalNumber(int num);

	RationalNumber add(const RationalNumber& rn) const;
	RationalNumber subtraction(const RationalNumber& rn) const;
	RationalNumber multiplication(const RationalNumber& rn) const;
	RationalNumber division(const RationalNumber& rn) const;
	

	int get_numberator();
	int get_denominator();

	
	

	void printRationalNumber();




private:

	int numerator;
    int denominetor;


	
};


int main() {

	RationalNumber rn1(1, 6);
	RationalNumber rn2(2);

	cout << "First number: \n";
	rn1.printRationalNumber();
	cout << "\nSecond number: ";
	rn2.printRationalNumber();
	cout << "\nAddition: ";
	rn1.add(rn2).printRationalNumber();
	cout << endl;
	cout << "Subtraction: ";
	rn1.subtraction(rn2).printRationalNumber();
	cout << endl;
	cout << "Multiplication: ";
	rn1.multiplication(rn2).printRationalNumber();
	cout << endl;
	cout << "Division: ";
	rn1.division(rn2).printRationalNumber();




	return 0;
}

RationalNumber::RationalNumber() {
	numerator = 1;
	denominetor = 1;
}

RationalNumber::RationalNumber(int num1, int num2) {

	numerator = num1;
	denominetor = num2;

}
RationalNumber::RationalNumber(int num) {

	numerator = num;
	denominetor = 1;

}

RationalNumber RationalNumber::add(const RationalNumber& rn) const {
	RationalNumber temp;
	temp.numerator = numerator * rn.denominetor + denominetor * rn.numerator;
	temp.denominetor = denominetor * rn.denominetor;
		
	return temp;

	}

int  RationalNumber::get_numberator() {

	return numerator;

}
int  RationalNumber::get_denominator() {

	return denominetor;
}

RationalNumber RationalNumber::subtraction(const RationalNumber& rn) const {
	RationalNumber temp;
	temp.numerator = numerator * rn.denominetor - denominetor * rn.numerator;
	temp.denominetor = denominetor * rn.denominetor;

	return temp;
}
RationalNumber  RationalNumber::multiplication(const RationalNumber& rn) const {
	RationalNumber temp;

	temp.numerator = numerator * rn.numerator;
	temp.denominetor = denominetor * rn.denominetor;


	return temp;

}
RationalNumber RationalNumber::division(const RationalNumber& rn) const {
	RationalNumber temp;

	temp.numerator = numerator * rn.denominetor;
	temp.denominetor = denominetor * rn.numerator;


	return temp;

}

void RationalNumber::printRationalNumber() {
	cout << numerator << "/" << denominetor << endl;
}