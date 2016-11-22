#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("employees.txt", ios::in);
	char fname[20], lname[20];
	for( int i = 0; i <10; i++) {
		fin >> fname>>lname;
		cout<<fname<<""<<lname<<" ";
		cout<<"1,000.00"<<endl;
	}
}