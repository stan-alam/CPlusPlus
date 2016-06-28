#include <iostream>
using namespace std;
const int MAXSIZE = 10;
main() {

   int tbl[MAXSIZE], n;
   n = 0;
   while((n < MAXSIZE) && (cin >>tbl[n])) {n++;}
   cout<<"FIRST ELEMENT    "<<tbl[0]<<endl;
   cout<<"MIDDLE ELEMENT   "<<tbl[n/2]<<endl;
   cout<<"LAST ELEMENT     "<<tbl[n - 1]<<endl;
   return 0;
}  //end main