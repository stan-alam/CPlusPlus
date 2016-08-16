#include <fstream>

#include <iostream>

#include <iomanip>

using namespace std;

class employee{

      ifstream fin;

      public: char employeename[20];

      int hoursworked,overtime;

      double hourlyrate, overtimepay, regularpay, grosspay, taxrate, taxamount, netpay;

      virtual double calculategrosspay();

      virtual double calculatetax();

      virtual double calculatenetpay();

      void printheadings();
  void printdata();
      void  sortbypointers(); // ******** this line was missing

public: employee();

      ~employee();

      void printreport();

      };  // CLASS EMPLOYEE



      employee::employee(){

           fin.open("employee.dat");

      } //constructor
 employee::~employee(){

      fin.close();

      } //destructor



   class hourly: public employee{

       public: double calculategrosspay(){

               if(hoursworked > 40){

               int overtimehours=hoursworked-40;

               regularpay=hoursworked*hourlyrate;

               overtimepay=overtimehours*(hourlyrate*1.5);

               grosspay=regularpay+overtimepay;}

               else{
 grosspay=hoursworked*hourlyrate;

                regularpay=grosspay;

                return grosspay;

                }//END IF

        }//calculate grosspay for hourly employee

};//Hourly employee Object



class salaried:public employee{

       public:

      double calculategrosspay(){


               if(hoursworked>0){

               overtimepay=hoursworked*(regularpay/52/40);

               regularpay=hourlyrate/52;
  grosspay=regularpay+overtimepay;

               return grosspay;

               }//If

       }//calculate grosspay for salaried employee

};//Salaried employee Object



double employee::calculatetax() {

     taxrate = .30;

     taxamount=grosspay*taxrate;

     return taxamount;

} //CALCULATE TAX


double employee::calculatenetpay() {

     netpay = grosspay -taxamount;

     return netpay;

     } //CALCULATE NETPAY



void employee:: sortbypointers(){

     cout << "Before sorting by pointer:" << endl;

     double p[100];

     int i,j, n;

  double temp;

  int sortedflag=0;

  for(i=0;i<n;i++) p[i]=netpay+i; //INITIALIZING POINTER ARRAY

 for(i=0;i<n;i++)cout<< "$" << p[i]<<" ";

  while (!sortedflag){

   sortedflag=1;

   for(j=0;j<n-1;j++ ){

      if (p[j]>p[j+1]){

          temp=p[j];

          p[j]=p[j+1];

          p[j+1]=temp;

          sortedflag=0;
      }//SWAP

    }//J

   }//I

       cout<<endl<<"SORTED ARRAY:";

 for(i=0;i<n;i++)cout<<p[i]<<" ";

}//sort function



void employee::printheadings(){

     cout<<setw(45)<<"-PAYROLL REPORT-"<<endl;

     cout<<setw(9)<<"EMPLOYEE NAME"<<setw(5)<<"HW"<<setw(6)<<"HR"<<setw(6)<<"OTP"<<setw(9)<<"GROSS"<<setw(6)<<"TAX"<<setw(11)<<"NET PAY"<<endl<<endl;

     } //PRINT HEADINGS



void employee::printdata(){

     cout<<setw(6)<<employeename<<setw(12)<<hoursworked<<setw(6)<<hourlyrate<<setw(8)<<overtimepay<<setw(8)<<grosspay<<setw(8)<<taxamount<<setw(8)<<netpay<<endl;

     } //PRINT DATA



void employee::printreport(){

     int i = 0;

     double sum;

     printheadings();

     while(fin>>employeename>>hoursworked>>hourlyrate){

           calculategrosspay();

           calculatetax();

           calculatenetpay();

           printdata();

           sum = sum + netpay;   //calculate netpay sum

           i++;

           } //END WHILE



     cout<<"Average Net Pay = "<<sum/i<<endl;  //calculate and print the average netpay

     } //PRINT REPORT





int main(){

     employee payroll;

     payroll.printreport();

} //MAIN  (still working on this)