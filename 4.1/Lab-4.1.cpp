// This program tests whether or not an initialized value
// is equal to a value input by the user

// Xander Perez & Even Jorgens
// CSCI-40-53006

#include <iostream>
using namespace std;

int main()
{
	int num1;	// num1 is not initialized
	int num2;	// num2 has been initialized to 5

	cout << "Please enter a first number." << endl;
	cin >> num1;
	cout << "Please imput second number.\n";
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2){
		cout << "The values are the same.\n" << "Hey, that's a coincidence!" << endl;
	}
	else {
		cout << "The values are not the same" << endl;
	}
	return 0;
}