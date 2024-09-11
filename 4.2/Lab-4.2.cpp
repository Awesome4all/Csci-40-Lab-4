// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Xander Perez & Even Jorgens
// CSCI-40-53006

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100){
		cout << "Invalid Data" << endl;
	}
	else if (average >= 90){
		cout << "A" << endl;
	}
	else if (average >= 80)
	{
		cout << "You Pass" << endl;
	}
	else if (average >= 0) {
		cout << "You Fail" << endl;
	}
	return 0;
}