#include <iostream>
using namespace std;

main() {
	int firstNumber, secondNumber, thirdNumber, max;
	cout << "Enter three numbers:";
	cin  >> firstNumber >> secondNumber >> thirdNumber;
	if ( firstNumber > secondNumber)
		max = firstNumber;
	else
		max = secondNumber;
	if ( thirdNumber > max )
		max = thirdNumber;
	else max = max;
	if (firstNumber == secondNumber) {
		max = firstNumber;
		if ( max == thirdNumber)
			cout << "All three numbers are equal." << endl;
		else
			if(thirdNumber > max ) max = thirdNumber;
	} // end of IF

cout << "Max is " << max << endl;
return 0;
}