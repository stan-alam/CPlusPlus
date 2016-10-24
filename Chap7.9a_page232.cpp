// C style pass by pointer of a structure. The function changeValue changes the initial member variables of the employee
// structure
#include <iostream>
using namespace std;

struct person {
	int age;
	float salary;
};

//function prototype

void changeValue( person* );
main() {

	person employee;
	employee.age = 30;
	employee.salary = 65000.00;
	changeValue(&employee);
	cout << "employee.age = " << employee.age << endl;
	cout << "employee.salary = " << employee.salary << endl;
	return 0;

}
void changeValue( person *p ) {
	// p is an alias for employee. p has the same memory address as the
	// employee variable listed in main and therefore has access to change
	// the values of the member variables of the employee structure.
	cout << "changeValue function -> Changing structure values ... " << endl;
	p->age = 32;
	p->salary = 72000.00;
}