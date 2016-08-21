#include <iostream>
#include <string>
#include <fstream>




using    namespace    std;


/*  Declaring a structure to store employee data after reading from file */


struct EMP{

        int             eid;
        double          hours;
        double          rates;
        double          grossSal; // Gross salary
        double          netSal;   // net salary, 70% of gross sal

};


/*   Class Emp1   has all methods to read data, find Gross Salary,
     find Net Salary, calculate Average of net salary and print the report*/


class   Empl{

 public:

     EMP         emp5[5];
     int         elem;

     double       sum, avg;



    void        readEmpData();
    void        calcGrossSal();
    void        calcNetSal();
    void        calcNetAvgSal();
    void        printReport();
};

/* Reading data from file, there are 3 colums, id, hours  and rate */

    void           Empl::readEmpData(){

         double   id, hrs, rate;

        ifstream dataFile;
        dataFile.open("payroll.in");

        int  i = 0;

        while (1) {
           dataFile>>id >>hrs >>rate;
           if  ( dataFile.eof() )
              break;
           emp5[i].eid = id;
           emp5[i].hours = hrs;
           emp5[i].rates= rate;;

           i++;
       }
       elem = i;
       dataFile.close();
    }


/* After reading data from file, data were stored in the structure,
   here calculating Gross salary and storing in the structure  */


    void           Empl::calcGrossSal(){

         double       esal;


         sum = 0;
         avg = 0;

            for (int i = 0;   i  < elem; i++) {

             esal = emp5[i].rates * emp5[i].hours; //gross salary for each employee

             emp5[i].grossSal = esal;  // salary for each eployee in struct


         }

   }


/* Here calculating Net salary and storing in the structure  */


    void           Empl::calcNetSal(){

         double       nSal;


         for (int i = 0;   i  < elem; i++) {

             nSal = emp5[i].grossSal * 0.7; // 30% average tax.
             emp5[i].netSal = nSal;  // salary for each eployee in struct
        }
   }



/*   Here sorting  Net salary   */

 void           Empl::sortNetSal(){

         double       esal;

         EMP              *tmp;

         EMP              *ep[elem];

         double           minSAL = 0;


        cout<<"Employee ID and Net Salary before Sorting: " << endl;
        cout<< endl;
        cout<<"Employee ID" <<"   Net Salary " << endl;
        cout<< endl;

        for (int i = 0;   i  < elem; i++) {

           cout<< emp5[i].eid<<"        " <<emp5[i].netSal <<endl;
         }

        cout<< endl;
        cout<< endl;

         for(int k = 0; k<elem; k++)
         {
              ep[k] = &emp5[k];
         }

         for(int i = 0; i<elem; i++)
         {

              for(int j = i +1; j<elem; j++)
              {
                  if( ep[i]->netSal > ep[j]->netSal) {
                     tmp = ep[i];
                     ep[i] = ep[j];
                     ep[j] = tmp;
                  }
              }

         }


        cout<<"Employee ID and Net Salary After Sorting: " << endl;
        cout<< endl;
        cout<<"Employee ID" <<"   Net Salary " << endl;
        cout<< endl;

        for (int i = 0;   i  < elem; i++) {

           cout<< ep[i]->eid<<"        " <<ep[i]->netSal <<endl;
         }

        cout<< endl;

   }



main() {

     Empl          emp1;



    emp1.readEmpData();
    emp1.calcGrossSal();
    emp1.calcNetSal();
    emp1.sortNetSal();


}

/***********************Output

Employee ID and Net Salary before Sorting:

Employee ID   Net Salary

1645        69.93
8932        560
7104        223.86
2816        525
5387        146.79


Employee ID and Net Salary After Sorting:

Employee ID   Net Salary

1645        69.93
5387        146.79
7104        223.86
2816        525
8932        560

************************************/



