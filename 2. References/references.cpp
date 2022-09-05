#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = 10;

	int &b = a; // Reference varible
	cout << a << "\t" << b << endl; // Same value
	cout << &a << "\t" << &b << endl; // Same memory address
	a++;
	cout << b << endl;
	b++;
	cout << a << endl;
	int c = 100;
	b = c;
	cout << a << endl;
	return 0;
}