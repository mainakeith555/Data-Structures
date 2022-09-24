#include <iostream>
#include <string>

using namespace std;

class Movie {
public:
	Movie(string movieName, string mpaaRating);
	Movie();

	void setMoiveName(string name);
	void setmpaaRating(string mpaa);

	string getMovieName();
	string getmpaaRating();
	void addRating(int rating);
	double getAverage();
		

private:

	string movieName;
	string mpaaRating;
	int arr[5];

	};

int main() {
	int ans;

	Movie m1("Interstellar", "PG-13");
	Movie m2("Toy Story 3", "G");

	m1.addRating(1);

	m1.addRating(2);
	m1.addRating(2);

	m1.addRating(3);
	m1.addRating(3);
	m1.addRating(3);

	m1.addRating(4);
	m1.addRating(4);
	m1.addRating(4);

	m1.addRating(5);
	m1.addRating(5);
	m1.addRating(5);
	m1.addRating(5);
	m1.addRating(5);

	cout << m1.getMovieName();

	cout << "\t" << m1.getmpaaRating();
	cout << "\t";
	
	cout << m1.getAverage() << endl;

	m2.addRating(1);

	m2.addRating(2);
	m2.addRating(2);


	m2.addRating(4);
	m2.addRating(4);
	m2.addRating(4);
	m2.addRating(4);

	m2.addRating(4);
	m2.addRating(4);
	m2.addRating(4);
	m2.addRating(4);

	m2.addRating(4);
	m2.addRating(4);
	m2.addRating(4);
	m2.addRating(4);


	
	cout << m2.getMovieName();

	cout << "\t" << m2.getmpaaRating();
	cout << "\t";

	cout << m2.getAverage();
	





}

void Movie::setMoiveName(string name) {
	movieName = name;

}
void Movie::setmpaaRating(string mpaa) {
	mpaaRating = mpaa;

}

string Movie::getMovieName() {
	return movieName;
}

string Movie::getmpaaRating() {
	return mpaaRating;
}

void Movie::addRating(int rating) {
	if (rating < 1 || rating > 5) {
		cout << "You entered an invalid number \n";
		exit(1);
	}

	arr[rating - 1]++;
}

double Movie::getAverage() {

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);

	double average = 0;
	int count = 0, sum = 0;

	for (int i = 0; i < 5; i++) {

			sum = (arr[i] * (i + 1)) + sum;
			count = arr[i] + count;


			average = static_cast<double> (sum) / count;
		
	}
	

	return average;
}

Movie::Movie(string name, string mpaa) {
	movieName = name;
	mpaaRating = mpaa;
	for(int i = 0; i < 5; i++)
		arr[i] = 0;

}
Movie::Movie() {
	movieName = "";
	mpaaRating = "";
	arr[5] = { 0 };
}

