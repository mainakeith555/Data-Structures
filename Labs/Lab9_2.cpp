#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

	ifstream instream;
	string text, first, second, third;

	vector<string> word;
	int begin = 0, end = 0;
	
	if (instream.fail()) {
		cout << "Input file opening failed. \n";
		exit(1);
	}
	instream.open("C:\\Users\\14438\\Dropbox (AEG Environmental)\\My PC (Keith-155KEM85)\\Desktop\\Towson university\\Courses\\Prerequisites\\Data Structures and Algoriths\\Lab 9\\extract info.txt");

	getline(instream, text);

	cout << "Text: " << text << endl;
	cout << endl;

	

	while (begin != - 1 && end != -1) {
		begin = text.find("(", end);
		end = text.find(")", begin);

		if (begin != -1 && end != -1) {
			word.push_back(text.substr(begin + 1, end - begin - 1));
		}
			
	}

	cout << "Extracted Words: ";
	for (int i = 0; i < word.size(); i++) {

		cout << word[i] << " ";
		
	}
	cout << endl;

	instream.close();
}