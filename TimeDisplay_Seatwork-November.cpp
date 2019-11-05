#include <iostream>
#include <iomanip> //for setw(int) and setfill(char);
using namespace std;

int hour, minutes;
string noon;

void getHour();
void getMinutes();
void displayTime();
int main() {
	for (;;){//infinite loop
		getHour();//Call this Function(Line 35) and it's conditions 
		if (hour > 24 || hour == 0) {//if the hour is greater than 24, go back to start.
			cout << "Invalid Input. Should not exceed from 24 and cant be 0. Try again" << endl;
			main();
		}
		else if (hour > 12 && hour < 24) {//if hour is greater than 12 but not greater than 23, subtract the input to 12. then set the noon as PM
			hour = hour - 12;
			noon = "PM";
		}
		else if (hour == 24) {//if hour IS 24, set noon as AM
			noon = "AM";
		}

		getMinutes();//Call this Function(Line 40) and it's conditions
		if (minutes > 59) {//if minutes is greater than 59, go back to start.
			cout << "Invalid Input. Should not exceed from 59. Try Again" << endl;
			main();
		}
		
		displayTime();//Display Time(Line 45)
	}
}
void getHour() {
	cout << "Enter Hour: ";
	cin >> hour;
}

void getMinutes() {
	cout << "Enter Mintues: ";
	cin >> minutes;
}

void displayTime() {
	cout << hour << ":";
	cout << setw(2) << setfill('0') << //set the width to 2 decimals, then blanked decimals should have a '0' character (not an integer). Ex: 0:00 noon
		minutes << " " << noon << endl;
}
