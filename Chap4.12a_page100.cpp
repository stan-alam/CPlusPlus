#include <iostream>
using namespace std;

main() {

	int hw, empId;
	float hr, gp, np, taxRate, taxAmnt;
	while ( cin >> empId >> hw >> hr ){

		gp = hw * hr;
		if (gp > 1000 ) 		taxRate = 0.30;
	    else if ( gp > 800 ) 	taxRate = 0.20;
	    else if ( gp > 500)		taxRate = 0.10;
	    else taxRate = 0.0;
	    taxAmnt = gp * taxRate;
	    np = gp - taxAmnt;
	    cout << "Employee ID is "  << empId << endl;
	    cout << "Hours Worked "    << hw << endl;
	    cout << "Hourly Rate  "    << hr << endl;
	    cout << "Gross Pay    "    << gp << endl;
	    cout << "Tax Amount   "    << taxAmnt << endl;
	    cout << "Net Pay is   "    << np << endl << endl;
	} // while

return 0;

}