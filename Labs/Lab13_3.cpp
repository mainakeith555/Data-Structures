#include <iostream>

using namespace std;

int fact_num(int n);

int main() {

	cout << endl;
	cout << fact_num(7);

	return 0;
}

int fact_num(int n) {
	if (n == 0) {

		return 1;
	}
	else {

		return n * fact_num(n - 1);
	}
}