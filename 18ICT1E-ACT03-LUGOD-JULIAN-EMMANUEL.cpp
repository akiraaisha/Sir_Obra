/*ACTIVITY #3 - - STUDENT INFORMATION USING CONSTANT DECLARATION
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

int main() {
	//INITIALIZE THE DISPLAY HEADERS
	const string DASH_LINE = "-------------------------------------------------------";
	const string STUDENT_INFORMATION = "\n\t\tSTUDENT INFORMATION\n";

	//initialization of Constant Variables
	const string First_name = "Julian Emmanuel",
		Middle_name = "Ortega",
		Last_name = "Lugod",
		BirthDate = "February 24, 1999",
		School_Name = "One Cainta College",
		School_Address = "ROTC Hunters Road, Cainta, Rizal",
		Home_Address = "Peace Street, A-Prime Cmpd., Cainta, Rizal",
		Course = "Information Communication Technology",
		Contact_Number = "0995-2136-418";
	const int age = 19,
		Student_Number = 785;
		
	//DISPLAY
	cout << DASH_LINE << STUDENT_INFORMATION << DASH_LINE << endl;
	cout << "COMPLETE NAME:\n" << Last_name << ", " << First_name << " " << Middle_name << endl << endl;


	cout << "BIRTHDATE:\n" << BirthDate << endl << endl;
	cout << "Age:\n" << age << endl << endl;


	cout << "STUDENT NUMBER:\n" << "2018-000" << Student_Number  << endl << endl;
	cout << "COURSE:\n" << Course << endl << endl;


	cout << "SCHOOL NAME:\n" << School_Name << endl << endl;
	cout << "SCHOOL ADDRESS:\n" << School_Address << endl << endl;
	cout << "HOME ADDRESS:\n" << Home_Address << endl << endl;

	cout << "CONTACT NUMBER\n" << Contact_Number;

	return 0;
}
