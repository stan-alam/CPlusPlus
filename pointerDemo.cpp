#include <iostream>
#include <cstring>
#include <cstdlib>


 using namespace std;

 main() {

   char  *p;

   p = (char*) malloc(100);

   strcpy(p, "Hello World");

   strcat ( p, "\0");

   cout << strlen(p) << endl;

   while (p != NULL) {

   	    cout << *p;

        p ++; // will show segmentation fault

        if ( p == NULL)
    	    break;
   }

 }