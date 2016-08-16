#include <iostream>
using namespace std;

struct person {
	char name [ 20 ];
	int age;
	float salary;
};

main() {

	person employee = 		{ "Stan", 35, 350000};
	cout << "Name is 	" << employee.name << endl;
	cout << "Age is 	" << employee.age<< endl;
	cout << "Salary     " << employee.salary << endl;
	return 0;
}