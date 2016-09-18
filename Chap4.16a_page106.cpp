#include<iostream>

using namespace std;

main() {

	int number1, number2, number3, max;
	cout << "Enter Three different numbers: ";
	cin >> number1 >> number2 >> number3;
	if (( number1 > number2) && (number1 > number3))
		max = number1;
	if (( number2 > number1) && ( number2 > number3 ))
		max = number2;
	 if (( number3 > number1) && ( number3 > number2))
	max = number3;
	cout << "The max is " << max << endl;
	return 0;
}