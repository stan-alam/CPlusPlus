#include<iostream>

using namespace std;

main() {
	int number, max;
    max = -9999; //the smallest number possible not in the data
    while(cin >> number) {
    	if(number > max)
    		max = number;

    }// end while

    cout << "The max is " << max << endl;
    return 0;


}