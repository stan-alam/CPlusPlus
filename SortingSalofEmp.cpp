/* C++ program sorting  the salaries of 10  Employees   */


#include <iostream>
#include <string>




using    namespace    std;

/*   Defining new  Structure Type  EMP with 2 fields  ename and salary to hold Employee data */

typedef struct EMP{
        string          ename;
        double          salary;
};



/*   Defining class  Empl; it has  Methods sortSAL() to  salary &  printArr() to print employee info.  */

class   Empl{


    public:

    double         sum, avg;

    void  sortSAL (EMP        e10[], int     elems) {

         /* This method receives an array of 10  elements, and it's elements number  */

         EMP              tmp;

         double           minSAL = 0;

         for (int i = 0;   i  < elems -1; i++) {   // Nested for loop for sorting

               for (int j = i +1;   j  < elems ; j++) {

                    if ( e10[j].salary < e10[i].salary ) {

                          tmp = e10[i];
                          e10[i] = e10[j];

                          e10[j] = tmp;
                   }

               }
         }
         /*  printing the Array of structure after sorted   */

         cout<< "Data printed after  sorting... "  <<endl;

         for (int i = 0;   i  < elems; i++) {
             cout<<"Employee Name: "<< e10[i].ename  << ",    " <<"Salary: "<< e10[i].salary <<endl;
         }



     }

    void  printArr(EMP     e10[], int    elems)  {


          cout<< "Data printed before sorting... "  <<endl;
   for (int i = 0;   i  < elems; i++) {

             cout<<"Employee Name: "<< e10[i].ename  << ",    " <<"Salary: "<< e10[i].salary <<endl;
         }


          cout<< "    "  <<endl;

     }


};





main() {

    /*   Declaring  an Array of struct and initializing  it   */

    EMP  emp10[] = { {"John", 1200.00},
        {"Stuart", 1600.00},
        {"Mark", 900.00},
                         {"Nancy", 1550.00},
                         {"James", 1900.00},
                         {"Jenny", 1650.00},
                         {"Julia", 1500.00},
                         {"Susan", 1150.00},
                         {"Michelle", 1400.00},
                         {"Miller", 1250.00} };

      int        totalEmps = 10;



     Empl        empl;   // Declaring  Object from class

     empl.printArr(emp10,   totalEmps);  //printing before sorting

     empl.sortSAL(emp10,   totalEmps);  //Method sorting the e10 Array
}