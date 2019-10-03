/*Activity #5A
*
*PROGRAMMED AND SUBMITTED BY:
*Lugod, Julian Emmanuel O.
*
*18ICT1E
*Monday/Thursday 5:30-8:30PM
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
	char letter_input;
	cout << "Enter a letter: ";
	cin >> letter_input;

	if (letter_input == 'A' || letter_input == 'a') {
		cout << letter_input << " is a vowel.";
	}
	else if (letter_input == 'E' || letter_input == 'e') {
		cout << letter_input << " is a vowel.";
	}
	else if (letter_input == 'I' || letter_input == 'i') {
		cout << letter_input << " is a vowel.";
	}
	else if (letter_input == 'O' || letter_input == 'o') {
		cout << letter_input << " is a vowel.";
	}
	else if (letter_input == 'U' || letter_input == 'u') {
		cout << letter_input << " is a vowel.";
	}
	else {
		cout << letter_input << " is a consonant.";
	}
	return 0;
}
