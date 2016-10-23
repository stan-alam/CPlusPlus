#include <iostream>
#include <iomanip> // parameterized stream manipulators
#include "GradeBook.h" //include the definition of class GradeBook

using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook ( string name )
{

  setCourseName( name ); //validate and store courseName

}  // end GradeBook constructor

//function set the course name;
//ensure that the course name has at most 25 characters
void GradeBook::setCourseName( string name )
{

  if (name.length() <= 25 ) // if name has 25 or fewer characters
    courseName = name; //store the course name in the object
  else // if name is longer than 25 characters
  { //set courseName to first 25 characters
    courseName = name.substr( 0, 25 ); //select first 25 characters
    cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
      << "Limiting courseName to first 25 characters.\n" << endl;
  } // end if/else


} //end of function setCourseName

//function to retrieve the course name
string GradeBook::getCourseName()
{
    return courseName;

}  //end function getCourseName

//display a welcome message to the user
void GradeBook::displayMessage()
{

  cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
    << endl;

} //end function displayMessage


//determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage()
{
  int total; //sum of grades entered by user
  int gradeCounter; // number of grades entered
  int grade; // grade value
  double average; //number with decimal point for average

  //initialization phase
  total = 0; // initialize total
  gradeCounter = 0; // initialize loop counter

  //process phase
  //prompt for input and read grade from user
  cout << "Enter grade or -1 to quit: ";
  cin >> grade; //input grade or sentinal value

  //loop until sentinel value read from user
  while ( grade != -1 ) // while the grade is not -1
  {

    total = total + grade; // add grade to total
    gradeCounter = gradeCounter + 1; //increment counter

    //prompt for input and read next gradde from user
    cout << "Enter grade or -1 to quit: ";
    cin >> grade; // input grade or sentinel value
  } //end while loop

  //termination phase

  if ( gradeCounter != 0 ) //if user entered at least one grade
  {
    //calculate the




  }

}