//Fig. 4.14: fig04_14.cpp
//Create GradeBook object and invole its determineCLassAverage function

#include "GradeBook.h" //include definition of class GradeBook

int main() {

	//create GradeBook object myGradeBook and pass course name to constructor

	GradeBook myGradeBook ( "C++ Programming");

	myGradeBook.displayMessage(); //display the welcome message
	myGradeBook.determineClassAverage(); //find average of 10 grades

}
