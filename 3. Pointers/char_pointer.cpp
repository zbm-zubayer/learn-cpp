#include<bits/stdc++.h>
using namespace std;

int main() {
	char c = 'b';
	char* cp = &c; // character pointer
	
	cout << c << "\t" << &c << endl;
	cout << cp << "\t" << &cp << "\t" << *cp << endl;
	
	return 0;
}