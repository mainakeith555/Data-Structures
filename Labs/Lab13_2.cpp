#include <iostream>
using namespace std;

int fib_nums(int n);

int main() {

	cout << endl;
	cout << fib_nums(12);

	return 0;
}

int fib_nums(int n) {
	if (n <= 1) {

		return n;
		}
	else {

		return fib_nums( n - 1) + fib_nums(n - 2);
	}
	
}
