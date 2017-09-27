/*
Brian Teh - 9/25/2017 p.4
Assignment Name : Problem Project 2
Practice for Problems
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Define and Assign your variable(s)
	int SSN; // what is social security number
	double Ysleep; // how long do you sleep for
	double Msleep = 4; //4 hours
	char letter; // asking for favorate letter
	bool Tsleep; // compare sleep timer
		// Display Text
	cout << "What is your Social Security Number? "; //asking for SSN
	cin >> SSN; //collecting SSN
	cout << "how many hours do you normally sleep for? ";
	cin >> Ysleep;
	cout << "What is your favorite letter? ";
	cin >> letter;
	Tsleep = Ysleep > Msleep;
	cout << endl;

		//
		cout << "Thank you for your Social Security Number:" << SSN << endl;
		cout << "your favorate letter is " << letter << "? " << letter << " is mine too!" << endl;
		cout << "you sleep for " << Ysleep << ", how intresting." << '\n';
	pause(); // pauses to see the displayed text

}