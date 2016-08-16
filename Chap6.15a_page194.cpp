#include <iostream>


using  namespace  std;


void noChange( int );

int main() {
	int x = 5;
	cout << "Before the function call X is " << cout <<x endl;
	noChange(x);
	cout << "After the function return X is" << cout << x <<endl;
}

void noChange ( int x){
	x = x + 1;
	cout << "Inside the function noChange x is " << cout x << endl;

}