#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void main(){
	int s1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int s2[] = {2,4,6,8};

	cout << "Set union is: ";
	set_union(s1, s1+4,s2,s2+4, ostream_iterator<int>(cout, " "));
	cout<< endl;
	cout << "Set intersection is:";
	set_intersection(s1, s1+4,s2,s2+4, ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "Set difference is: ";
	set_difference(s1, s1+4,s2,s2+4, ostream_iterator<int>(cout, " "));
	cout << endl;

}