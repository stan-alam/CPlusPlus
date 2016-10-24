// C++ style pass by reference of a structure. The function changeValue changes the initial member variables of the
// employee structure
#include <iostream>
using namespace std;

struct person {

	int age;
	float salary;

};

//function prototype
void changeValue( person& );
main() {

	person employee;
	employee.age = 30;
	employee.salary = 65000.00;
	changeValue( employee );
	cout << "employee.age: " << employee.age << endl;
	cout << "employee.salary: " << employee.salary << endl;
	return 0;
}

void changeValue( person &p) {

	// p is the alias of emplyee with direct access to the real values
	//of the employee structure

	cout << "changeValue function -> Changing structure values ... " << endl;
	p.age = 32;
	p.salary = 72000;


}