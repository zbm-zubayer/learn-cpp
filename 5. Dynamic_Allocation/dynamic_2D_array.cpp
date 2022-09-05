#include<bits/stdc++.h>
using namespace std;

int main() {
	// A Dynamic 2D array of 10 rows and 20 columns
	/*
		int** p = new int*[10];
		for (int i = 0; i < 10; i++) {
			p[i] = new int[20];
		}
	*/
	// A Dynaminc 2D array of m rows and n columns with all user inputs
	int m, n;
	cin >> m >> n;
	int** p1 = new int*[m];
	for (int i = 0; i < n; i++) {
		p1[i] = new int[n];
		for (int j = 0; i < j; i++) {
			cin >> p1[i][j];
		}
	}
	// Here the 2D array does not need to be equal column size
	/*
		for(int i = 0; i < n; i++) {
			p1[i] = new int[i + 1];
			for(int j = 0; i < j; i++) {
				cin >> p1[i][j];
			}
		}
	*/
	// Memory Deallocation of 2D array
	for (int i = 0; i < m; i++) {
		delete [] p1[i];
	}
	delete [] p1;
	return 0;
}