#include <iostream>

using namespace std;

main() {
    int firstnumber, secondnumber, min, max;
    cout << "ENTER TWO NUMBERS:";
    cin  >> firstnumber >> secondnumber;

    if (firstnumber < secondnumber ) {
        min = firstnumber;
        max = secondnumber;
    } else {
        min = secondnumber;
        max = firstnumber;
    } //end else

    if ( firstnumber == secondnumber ) {
        cout << "Both are equal" << endl;

    } else {
        cout << "Min is " << min << endl;
    }   cout << "MAX is " << max << endl;

    return 0;


}