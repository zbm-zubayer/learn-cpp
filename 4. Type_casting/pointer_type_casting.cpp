#include<bits/stdc++.h>
using namespace std;

int main() {
	int i = 65;
	int* pi = &i;
	char* pc = (char*)pi; // Pointer explicit type casting
	cout << "pi = " << pi << endl
	     << "pc = " << pc << endl;

	cout << "*pc = " << *pc << endl
	     << "*pc + 1 = " << *(pc + 1) << endl
	     << "*pc + 2 = " << *(pc + 2) << endl
	     << "*pc + 3 = " << *(pc + 3) << endl;
	return 0;
}