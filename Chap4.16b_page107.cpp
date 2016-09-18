#include<iostream>

using namespace std;

main() {
	int number1, number2, number3, max;
	cout << "Enter 3 different numbers: ";
	cin >> number1 >> number2 >> number3;
	if (( number1 > number2 ) && (number1 > number3))
		max = number1;
	else if(number2 > number3 )
		max = number2;
	else
		max = number3;
	cout << "The max is " << max << endl;
	return 0;
}