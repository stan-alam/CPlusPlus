#include <iostream>
using namespace std;
main() {
	int id, hw;
	float hr, gp;

	cin >> id >> hw >> hr;
	while (!cin.eof()) {
		gp = hw * hr;
		cout << "The Id is " <<id << " the Gross Pay is " << gp << endl;
		cin >> id >> hw >> hr;
	} //while

return 0;


} //main