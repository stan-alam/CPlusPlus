#include <iostream>
#include <exception>
using namespace std;

int main() {
	int tb1[5];
	int i=0;
	while(i<2){
		try {
			int index;
			cout << "Enter a number between ( -1...5) to catch the system exception ";
			cin >> index;
			if(index < 0 ){
				throw "out of range\n";
			}
			cout << "My array is " << tb1[index] << tb1[index] << endl;
					}
		catch(char * str) {
			cout << "My array is " << tb1[index] << endl;
		}

		i++;

	}
}