#include<iostream>
main() {

	long int empId;
	int hoursWorked, overTimelHours;
	float hourlyRate, regularPay, overTimePay, grossPay;
	while ( std::cin >> empId >> hoursWorked >> hourlyRate) {
	    if (hoursWorked > 40 ) {
	       overTimeHours = hoursWorked - 40;
	       overTimePay = overTimeHours * hourlyRate * 1.5;
	       regularPay = 40 * hourlyRate;

	    } else {
	       overTimeHours = 0;
	       overTimePay = 0;
	       regularPay = hoursWorked * hourlyRate;

	    } //end if else

      grossPay = regularPay + overTimePay;
      std::cout << "EMPLOYEE ID IS " << empID <<std::endl;
      std::cout << "OVERTIME PAY IS " << overTimePaystd::endl;
      std::cout << "GROSS PAY    IS"  << grossPay <<std::end;

	} //end While


     return 0;

}  //end main