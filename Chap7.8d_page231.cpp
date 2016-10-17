//this program shows the C++ version of passing a structure by reference
#include <iostream>
#include <cstring>

using namespace std;
struct person {

	char name[ 20 ];
	char phone [ 16 ];
};

//function prototype
void readtostruct( person& );
main() {

	person employee;
	readtostruct( employee );
	cout << "employee.name = " << employee.name << endl;
	cout << "employee.phone = " << employee.phone << endl;
	return 0;
}

void readtostruct( person &employee ){

	cout << "Enter employee name: ";
	cin >> employee.name;
	cout << "Enter an employee phone number: ";
	cin >> employee.phone;
} //readtostruct


