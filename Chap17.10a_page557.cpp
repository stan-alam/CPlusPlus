#include <fstream>
#include <conio>
void main() {
	char c;
	ofstream fout("data.out");
	do {
		cout << "Enter a character, esc to stop:" << flush;
		c=getch();
		if(c==27)
			break;
		else {
			cout.put(c);
			cout << endl;
			fout.put(c);

		}
	}
while(1);
}
