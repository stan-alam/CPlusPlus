#include <iostream>
using namespace std;

main() {

	int empId[ 100 ], i = 0;
	int hoursWorked[ 100 ], overTimeHours [ 100 ];
	float hourlyRate[ 100 ], regularPay[ 100 ];
	float overTimePay[100],  grossPay[ 100 ];

	while( cin >> empId[i] >> hoursWorked[i] >> hourlyRate[i] {
		if( hoursWorked[i] > 40 ) {
			overTimeHours[i] = overTimeHours[i] - 40;
			overTimePay[i] = 40 * hourlyRate[i] * 1.5;
			regularPay[i] = 40 * hourlyRate[i];
		} else {
			overTimeHours[i] = 0;
			overTimePay[i] = 0;
			regularPay[i] = hoursWorked[i] * hourlyRate[i];

		} //else
		grossPay[i] = regularPay[i] + overTimePay[i];
		cout << "Employee ID is " << empId[i] << end;
		cout << "Over time pay is " << overTimePay[i] << endl;
		cout<< "Gross pay is " << grossPay[i] << endl;
		i = i + 1;
	}
return 0;


}
