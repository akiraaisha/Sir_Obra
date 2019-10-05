#include <iostream>
#include <string>
using namespace std;

int main() {
	int option;
	cout << "PROGRAM MENU: " << endl << "1. GRADE COMPUTATION" << endl << "2. Vowels and Consonants" << endl << "3. Positive and Negative Numbers";
	cout << "Select an option 1-3: ";
	cin >> option;

	switch (option) {
	case 1:
		int math, science, english, history, ict, ave_grade,equivalent_grade;
		cout << endl << "Grade Computation" << endl; 
		cout << "Enter Grade for Math: "; 
		cin >> math;
		cout << "Enter Grade for Science: ";
		cin >> science;
		cout << "Enter Grade for English: ";
		cin >> english;
		cout << "Enter Grade for History: ";
		cin >> history;
		cout << "Enter Grade for ICT: ";
		cin >> ict;
		ave_grade =(math + science + english + history + ict) / 5;
		cout << "\nAverage Grade is: " << ave_grade << endl;
		if (ave_grade >= 98) {
			cout << "Equivalent grade is: 1.00";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 95 && ave_grade <= 97) {
			cout << "Equivalent grade is: 1.25";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 92 && ave_grade <= 94) {
			cout << "Equivalent grade is: 1.50";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 89 && ave_grade <= 91) {
			cout << "Equivalent grade is: 1.75";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 86 && ave_grade <= 88) {
			cout << "Equivalent grade is: 2.00";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 83 && ave_grade <= 85) {
			cout << "Equivalent grade is: 2.25";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 80 && ave_grade <= 82) {
			cout << "Equivalent grade is: 2.50";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 77 && ave_grade <= 79) {
			cout << "Equivalent grade is: 2.75";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 75 && ave_grade <= 76) {
			cout << "Equivalent grade is: 3.00";
			cout << "\nRemarks: PASSED!";
		}
		else if (ave_grade >= 70 && ave_grade <= 74) {
			cout << "Equivalent grade is: 4.00";
			cout << "\nRemarks: FAILED!";
		}
		else {
			cout << "Equivalent grade is: 5.00";
			cout << "\nRemarks: FAILED!";
		}
		break;

	case 2: 
		char letter_input;
		cout << endl << "Enter a Letter: ";
		cin >> letter_input;
		
		if (isdigit(letter_input)) {
			cout << letter_input << " is not a letter. Invalid input.";
		}
		else if (letter_input == 'A' || letter_input == 'E' || letter_input == 'I' || letter_input == 'O' || letter_input == 'U' ||
			letter_input == 'a' || letter_input == 'e' || letter_input == 'i' || letter_input == 'o' || letter_input == 'u') {
			cout << letter_input << " is a vowel.";
		}
		else {
			cout << letter_input << " is a consonant.";
		}
		break;

	case 3:
		int number_input;
		cout << "\nEnter any number: ";
		cin >> number_input;
		if (number_input > 0) {
			cout << number_input << " is a Positive Number.";
		}
		else if (number_input == 0) {
			cout << number_input << " is neither Positive or Negative Number.";
		}
		else {
			cout << number_input << " is a Negative Number";
		}
		break;
	default:
		cout << "Wrong input value.";
		break;
	}
	return 0;
}
