#include <iostream>

using namespace std;

void findMax (int, int); //this is the function declaration aka prototype

int main()
{


	int firstNum, secNum,

	cout << "\nEnter a number: ";
	cin >> firstNum;
	cout << "Great! Please enter a second number: ";
	cin >> secNum;

	findMax(firstNum, secNum); //function is called here

	return 0;

}