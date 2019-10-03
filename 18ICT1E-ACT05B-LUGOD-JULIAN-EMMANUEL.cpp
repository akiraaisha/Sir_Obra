/*Activity #5B
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

	switch (letter_input) {
	case 'A':
		cout << letter_input << " is a vowel.";
		break;
	case 'E':
		cout << letter_input << " is a vowel.";
		break;
	case 'I':
		cout << letter_input << " is a vowel.";
		break;
	case 'O':
		cout << letter_input << " is a vowel.";
		break;
	case 'U':
		cout << letter_input << " is a vowel.";
		break;
	case 'a':
		cout << letter_input << " is a vowel.";
		break;
	case 'e':
		cout << letter_input << " is a vowel.";
		break;
	case 'i':
		cout << letter_input << " is a vowel.";
		break;
	case 'o':
		cout << letter_input << " is a vowel.";
		break;
	case 'u':
		cout << letter_input << " is a vowel.";
		break;
	default:
		cout << letter_input << " is a consonant.";
		break;
	}
	return 0;
}
