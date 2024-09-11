// This program illustrates the use of the switch statement.

// Xander Perez & Even Jorgens
// CSCI-40-53006

#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	if (grade == 'A'){
		cout << "an A - excellent work !" << endl;
		cout << "You passed" << endl;
	}
	else if (grade == 'B'){
		cout << "you got a B - good job" << endl;
		cout << "You passed" << endl;
	}
	else if (grade == 'C'){
		cout << "earning a C is satisfactory" << endl;
		cout << "You passed" << endl;
	}
	else if (grade == 'D'){
		cout << "while D is passing, there is a problem" << endl;
		cout << "You passed" << endl;
	}
	else if (grade == 'F'){
		cout << "you failed - better luck next time" << endl;
		cout << " You failed" << endl;
	}
	
	/*
	switch (grade)	// This is where the switch statement begins
	{
		case 'A': cout << "an A - excellent work !" << endl;
				  break;
		case 'B': cout << "you got a B - good job" << endl;
		          break;
		case 'C': cout << "earning a C is satisfactory" << endl;
		          break;
		case 'D': cout << "while D is passing, there is a problem" << endl;
			      break;
		case 'F': cout << "you failed - better luck next time" << endl;
		          break;
		default: cout << "You did not enter an A, B, C, D, or F" << endl;
	}

	switch (grade)
	{
		case 'A' : cout << "You passed" << endl;
				break;
		case 'B' : cout << "You passed" << endl;
				break;
		case 'C' : cout << "You passed" << endl;
				break;
		case 'D' : cout << "You passed" << endl;
				break;
		case 'F' : cout << " You failed" << endl;
	}
	*/

	return 0;
}