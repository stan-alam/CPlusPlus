#include <iostream>
#include <cstring>
#include <cstdlib>


 using namespace std;

 main() {


   char  *p;
   p = (char*) malloc(100);

   strcpy(p, "Hello World");

   cout << *p;

   cout << *(p+1);

   cout << *(p+2);

   cout << *(p+3);

   cout << *(p+4);

   cout << *(p+5); // here it will print Hello

   while (p != NULL) {



   	cout << *p;



    p ++; // will show segmentation fault

    if ( p == NULL)
    	break;


   }

 }