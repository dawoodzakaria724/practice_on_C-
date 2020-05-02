# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

int main()
{
	string first_name;
	string last_name;
	double gpa;
	int scholarship_amount;

	//Added setprecision
	cout << fixed << showpoint << setprecision(2);

	cout << "\nWhat is your first name? ";
	cin >> first_name;
	cout << "\nWhat is your last name? ";
	cin >> last_name;
	cout << "\nWhat is your gpa? ";
	cin >> gpa;
	cout << "\nWhat is your scholarship amount? ";
	cin >> scholarship_amount;
	cout << endl;

	cout << first_name << " " << last_name << ", your gpa is " <<
		gpa << ", and your scholarship amount is $"
		<< scholarship_amount << "." << endl << endl;

	//Printed Line with with different setfill characters
	cout << setw(10) << setfill('*') << first_name 
		 << setw(10) << setfill('#') << last_name 
		 << setw(10) << setfill('&') << gpa 
		 << setw(10) << setfill('*') << scholarship_amount;
	cout << endl;

	return 0;
}