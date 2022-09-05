#include<bits/stdc++.h>
using namespace std;

int main() {
	int* x = new int; // Dynamically declartion
	*x = 10;
	cout << *x << endl;

	double* y = new double(1.55); // Dynamically declaration + initializatoin
	cout << *y;
	char* c = new char;

	int* a = new int[50]; // Dynamic array
	int n;
	cin >> n;
	int* a2 = new int[n]; // Dynamic array with user input

	for (int i = 0; i < n; i++) {
		cin >> a2[i];
	}

	// Memory Deallocation
	// delete pointer variable => The address of the heap memory
	delete x;
	delete y;
	delete c;
	delete [] a;
	delete [] a2;
	return 0;
}