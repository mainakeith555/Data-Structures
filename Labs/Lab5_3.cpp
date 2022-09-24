#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int getrand(int min, int max);

int main() {

	int n1, n2;
	int counter = 0;

	srand(time(0));


	cout << "Please enter the min and max of the random number: " << endl;
	cin >> n1;
	cin >> n2;
	cout << endl;

	while (counter < 10) {
		cout << getrand(n1, n2) << " ";
		counter++;
	}
}


int getrand(int min, int max) {

	return rand() % (max - min + 1) + min;

}

