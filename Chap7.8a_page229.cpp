/*
Array of structures vs an array of arrays

The alternative to an array of structures os a choice of several arrays of arrays. In fact, early languages
did not have the ability to create structure arrays.

The array of arrays aka multidimensional array was a means to represent different but related data types.

Disadvantages of an array of arrays vs an array of structures are:

1. Several variable names and declarations are scattered throughout a program. As a result, the program becomes difficult to read and comprehend.

2. In order to pass the arrays to functions every array needed must be passed to the function when using an array of arrays. While using an array structure, just the name of the structure is sufficient. Then , within the function, the appropriate data members can be accessed.

Pointer to a structure:

It is possible to declare a variable that points to a structure just as an ordinary pointer points to an integer, double or character variable.

A pointer to a structure is used as a way to change the value of a structure member when it is passed to a function. To access a member variable of a structure using a pointer to the structure, use this syntax:

(*ptr).memberdata; // note the paranthesis around the pointer variable
ptr->memberdata;
These two lines accomplish the same task and allow for reading and writing of values from or to  the structure member variables.
*The arraow operator de-references a pointer so that the value located at the memory address represented by the pointer may be accessed. Since the dot operator has precedence over the de-reference operator (*)
the pointer ptr must be de-referenced before the member data can be accessed. Parenthesis forces the pointer, named ptr, to be de-referenced first. Then the dot operator can be used to access the member data variable. The choice of which syntax to use is based on style; however, the use of the arrow operator reduces keystrokes and gives a less cryptic feel.

By default, in C/C++, parameters are passed to a function by value. This means that any change to the value of a parameter's variable will not alter the original value of the variable. In other words, the change to the variable of the called function will not affect the value of the variable of the calling function.  Therefore, a structure variable will be passed to a function by value just like any other integer or float variable. When there is a need to change a value or values of a structure data member, C's pass by pointer or C++ pass by reference is used.

page 228
*/
#include <iostream>
#include <cstring>
using namespace std;

struct person {
	char name[ 20 ];
	char phone[ 16 ];

};

//function prototype
void printfromstruct ( person );
main() {

	person employee;
	strcpy( employee.name, "Jenny");
	strcpy( employee.phone, "867-5309");
	printfromstruct( employee );
	return 0;

} // end main

void printfromstruct( person employee ){
	// notice there is no need to pass the person structure by pointer
	//or by reference. No data is being changed, rather data is just being printed to the screen.
	cout << "employee.name = " << employee.name << endl;
	cout << "employee.phone = " << employee.phone << endl;
}

// in this example we pass a structure by value












