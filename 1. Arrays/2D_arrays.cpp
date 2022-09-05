#include<bits/stdc++.h>
using namespace std;

int main() {
	// Error because of not defining dimensions
	// int a[][] = {1, 3,  5, 7, 2, 4};

	// Another way of declaration for better visualization
	// int a[2][3] = {{1, 3, 5}, {7, 2, 4}};

	// int a[][3] = {1, 3,  5, 7, 2, 4}; => It is also valid

	int a[2][3] = {1, 3,  5, 7, 2, 4};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}