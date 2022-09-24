#include <iostream>
#include<fstream>
using namespace std;

int main() {
	//int min, max, average, count = 0;
	ifstream instream;
	double average = 0.00;
	int next, min = 1000, max = 0, count = 0, sum = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	
	instream.open("C:\\Users\\14438\\Dropbox (AEG Environmental)\\My PC (Keith-155KEM85)\\Desktop\\Towson university\\Courses\\Prerequisites\\Data Structures and Algoriths\\Lab 7\\Lab7_3_data.txt");

	if (instream.fail()) {
		cout << "Inpute file opening failed. \n";
		exit(1);
	}
	


	while (instream >> next) {
		if (next < min) {
			min = next;
		}
		if (next > max) {
			max = next;
		}

		sum += next;

		count++;

		average = static_cast<double>(sum) / count;

	}


		cout <<"Max: " << max << endl;
		cout << "Min: " << min << endl;
		

		cout << "Average: " << average << endl;

		instream.close();
		return 0;

	}



