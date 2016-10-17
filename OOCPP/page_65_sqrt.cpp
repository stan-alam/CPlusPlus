/*
library functions

Many activities in C++ are carried out by library functions. These functions perform file access, mathematical computations, and data conversions, among other things.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double number, answer;  //sqrt() requires type double


cout << "Enter a number: ";
cin >> number;
answer = sqrt(number);
cout << "Square root is "
<< answer << endl;
return 0;

}


/* Chapter 2, page 66

library functions

Many activities in C++ are carried out by library functions. These functions perform file access, mathematical computations, and data conversions, among other things.


/* Chapter 2, page 66

An argument is the input to the function; it is placed inside the parenthesis following the function name. The function then processes the argument and returns a value; this is the output from the function. In this case, the return value is the square root of the original number.

Returning a value means that the function expression takes on this value, which can then be assigned to another variable -- in this case answer. The program then displays this value.

*the argument to a function, and their values, must be the correct data type. You can find the data type by looking at the description of the function in the library.

In this example sqrt(), the description specifies both an argument and a return value of a type double, so we use variables of this type in this program.

Header files:

You must include the headers file that contains the declaration of any library functions you use.

Library files:

As mentioned earlier files containing library functions and objects will linked to your program to create an executable file. These files contain the actual machine-executable code for the functions. Such library files often have the extension lib.

Functions in the source file need to know the names and types of the functions and other elements in the library file. They are given this information in a header file. Each header file contains information for a particular group of functions. The functions themselves are grouped together in a library file, but the information about them is scattered through a number of header files. The IOSTREAM header file contains info for various I/O functions and objects, including cout, while the cmath header file contains information for mathematics functions such as sqrt(). If you're using a string function such as strcpy(), you would include STRING.H, and so on.

*/

