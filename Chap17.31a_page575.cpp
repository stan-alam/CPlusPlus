#include <ncurses>
#include <iostream>
#include <string>
int main() {
	char str[7];
	int limit = 0;
	while(limit<=3) {
		cout <<"\nPlease Enter your password (6 char): " <<endl;
		for(int i = 0; < 6; i ++) {
			str[i] = getch();
			cout << '*';
			cout.flush();
		}
		str[i] = '\0';
		if(strcmp(str, "secret") == 0) {
			cout << "\nYour password is ACCEPTTED" <<endl;
			return 1;
		}
		else {
			cout << "\nYour Password is incorrect. Please try again." << endl;
				limit++;
		}
	}
	cout <<"\nSorry, you've used all your chances." << endl;
	return 0;
}