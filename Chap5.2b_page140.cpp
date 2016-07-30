#include <iostream>



using  namespace  std;




main() {

    int empid[100], i = 0;
    int hoursworked[100], overtimehours[100];
    float hourlyrate[100], regularpay[100];
    float overtimepay[100], grosspay[100];
    while ( cin >> empid[i] >> hoursworked[i] >> hourlyrate[i]) {
    	if(hoursworked[i] > 40 ){
    		overtimehours[i] = hoursworked[i] - 40;
    		overtimepay[i] = overtimehours[i] * hourlyrate[i] * 1.5;
    		regularpay[i] = 40 * hourlyrate[i];


    	} //end IF statement

        else{
        	overtimehours[i] = 0;
        	overtimepay[i] = 0;
        	regularpay[i] = hoursworked[i] * hourlyrate[i];
        }//ELSE

    grosspay[i] = regularpay[i] + overtimepay[i];
    cout << "EMPLOYEE ID  IS "<< empid[i] << endl;
    cout << "OVERTIME PAY IS "<< overtimepay[i] << endl;
    cout << "GROSS PAY    IS" << grosspay[i] << endl;
     i = i + 1;
  }  //END of WHILE statement
  return 0;
 } // end of MAIN