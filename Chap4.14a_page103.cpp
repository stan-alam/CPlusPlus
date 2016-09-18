#include<iostream>

using namespace std;

main() {

	int number, max;
	cin >> number;
	max = number;
	while ( cin >> number ) {
		if( number > max ) max = number;

	} //end while
	cout << "Tha max is " << max << endl;
	return 0;

}