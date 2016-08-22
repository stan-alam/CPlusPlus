#include <iostream>
using namespace std;

class B {
	protected: int bm;
};

class DPV:private B {
	public: accessbm(int x) {
		bm = x+2;

	}
};

int main() {
	DPV ob;
	cout << "bm VALUE IS" << ob.accessbm(5)<<endl;
} // end main

/* Chap16.4a_page533.cpp:13:11: error: ‘::main’ must return ‘int’
 void main() {
           ^
Chap16.4a_page533.cpp: In function ‘int main()’:
Chap16.4a_page533.cpp:15:2: error: ‘cout’ was not declared in this scope
  cout << "bm VALUE IS" << ob.accessbm(5)<<endl;
  ^
Chap16.4a_page533.cpp:15:2: note: suggested alternative:
In file included from Chap16.4a_page533.cpp:1:0:
/usr/include/c++/4.9/iostream:61:18: note:   ‘std::cout’
   extern ostream cout;  /// Linked to standard output
                  ^
Chap16.4a_page533.cpp:15:43: error: ‘endl’ was not declared in this scope
  cout << "bm VALUE IS" << ob.accessbm(5)<<endl;
                                           ^
Chap16.4a_page533.cpp:15:43: note: suggested alternative:
In file included from /usr/include/c++/4.9/iostream:39:0,
                 from Chap16.4a_page533.cpp:1:
/usr/include/c++/4.9/ostream:564:5: note:   ‘std::endl’
     endl(basic_ostream<_CharT, _Traits>& __os)
     ^

*/