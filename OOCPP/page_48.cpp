#include <iostream>

using namespace std;

int main()
	{

		float rad;
		const float PI = 3.14159F;

		cout << "Enter radius of circle: ";
		cin >> rad; //prompt user to get radius
		float area = PI * rad * rad;
		cout << "Area is " << area << endl;
		return 0;
	}