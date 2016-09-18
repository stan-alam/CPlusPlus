#include<iostream>

using namespace std;

main() {
	int temperature;
	cout << "Enter temp:";
	cin >> temp;
	if (( temp > 212 ) || (temp < 32 ))
		cout << "Ready to shutdown. Take the appropriate action here.\n";
	else
		cout << "Follow the normal operation here.\n";

} //main