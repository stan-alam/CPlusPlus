#include <iostream>



using  namespace  std;




main() {

   int a1;
   int *p1;
   a1 = 10;


    cout<<"variable a1 stores:  " << a1 <<endl;
    cout<<"variable a1 is created at RAM address:  " <<&a1 <<endl;
    cout<<"at address:   "<< &a1   <<" a value " << *(&a1)  <<" is stored" <<endl;
}
