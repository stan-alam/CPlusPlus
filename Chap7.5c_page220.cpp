#include <iostream>
using namespace std;

struct person {
	char name[ 20 ];
	int age;
	float salary;

} employee;

main() {

	cout << "Enter Employee name: ";
	cin >> employee.name;
	cout << "Enter employee age: ";
	cin >> employee.age;
	cout << "Enter Employee salary: ";
	cin >> employee.salary;
	cout << "Name is " << employee.name << endl;
	cout << "Age is "  << employee.age << endl;
	cout << "Salary is " << employee.salary << endl;
	return 0;

}