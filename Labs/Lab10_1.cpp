#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(char* cstr);


int main() {

	char s1[50] = "neveroddoreven";
	char s2[50] = "notapalindrome";

	cout << boolalpha << isPalindrome(s1) << endl;
	cout << boolalpha << isPalindrome(s2) << endl;

	return 0;

}

bool isPalindrome(char* cstr) {
	char *front = cstr;

	char* back = cstr + strlen(cstr) - 1;
	while (front < back) {
			if (*front != *back) {
				return false;
					
			}
			front++;
			back--;
	
	}
	return true;
}