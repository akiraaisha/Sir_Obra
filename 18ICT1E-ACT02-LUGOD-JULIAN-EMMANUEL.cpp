/*ACTIVITY #2 - STUDENT INFORMATION USING VARIABLE DECLARATION
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
	 //INITIALIZE THE HEADERS
	string DASH_LINE = "--------------------------------------------------------------------";
	string TITLE = "\n\tONE CAINTA COLLEGE STUDENT INFORMATION PROFILE\n";
	string STUDENT_INFORMATION = "\n\t\tSTUDENT INFORMATION\n";
	cout << DASH_LINE << TITLE << DASH_LINE << endl;

	//initialization of variables
	string First_name,
		Middle_name,
		Last_name,
		BirthDate,
		School_Name,
		School_Address,
		Home_Address,
		Course;

	int age,
		Student_Number,
		Contact_Number = 0;

	//INPUTING FOR FIRST AREA
	cout << "ENTER YOUR FIRST NAME: ";
	getline(cin, First_name);
	cout << "ENTER YOUR MIDDLE NAME: ";
	getline(cin, Middle_name);
	cout << "ENTER YOUR LAST NAME: ";
	getline(cin, Last_name);
	cout << endl;
	
	//INPUTING FOR SECOND AREA AREA
	cout << "ENTER YOUR AGE: ";
	cin >> age;
	cin.ignore(); //using this 
	cout << "ENTER YOUR BIRTHDATE: ";
	getline(cin, BirthDate);
	cout << endl;
	
	//INPUTING FOR THIRD AREA
	cout << "ENTER YOUR STUDENT NUMBER: 2018-";
	cin >> Student_Number;
	cin.ignore();
	cout << "ENTER YOUR COURSE: ";
	getline(cin, Course);
	cout << endl;
	
	//INPUTING FOR FOURTH AREA
	cout << "WHAT IS YOUR SCHOOL NAME: ";
	getline(cin, School_Name);
	cout << "WHAT IS YOUR SCHOOL'S ADDRESS: ";
	getline(cin, School_Address);
	cout << "WHAT IS YOUR HOME ADDRESS: ";
	getline(cin, Home_Address);
	cout << endl;

	cout << "PLEASE ENTER YOUR CONTACT NUMBER: ";
	cin >> Contact_Number;
	cin.ignore();
	cout << endl;
	
	//////DISPLAYING YOUR INPUTS/////////
	//DISPLAYING FIRST AREA
	cout << DASH_LINE << STUDENT_INFORMATION << DASH_LINE << endl;
	cout << "COMPLETE NAME:\n" << Last_name << ", " << First_name << " " << Middle_name << endl << endl;
	
	//DISPLAYING SECOND AREA
	cout << "BIRTHDATE:\n" << BirthDate << endl << endl;
	cout << "Age:\n" << age << endl << endl;

	//DISPLAYING THIRD AREA
	cout << "STUDENT NUMBER:\n" << Student_Number << endl << endl;
	cout << "COURSE:\n" << Course << endl << endl;

	//DISPLAYING FOURTH AREA
	cout << "SCHOOL NAME:\n" << School_Name << endl << endl;
	cout << "SCHOOL ADDRESS:\n" << School_Address << endl << endl;
	cout << "HOME ADDRESS:\n" << Home_Address << endl << endl;

	cout << "CONTACT NUMBER\n" << Contact_Number;

	return 0;
}
