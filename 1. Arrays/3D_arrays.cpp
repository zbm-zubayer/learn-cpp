#include<bits/stdc++.h>
using namespace std;

int main() {
	string letters[2][3][2] = {
		{
			{ "A", "B" },
			{ "C", "D" },
			{ "E", "F" }
		},
		{
			{ "G", "H" },
			{ "I", "J" },
			{ "K", "L" }
		}
	};
	// 1st index = Number of 2D arrays
	// 2nd index = Number of rows of 2D arrays
	// 3rd index = Number of columns of 2D arrays
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				cout << letters[i][j][k] << "\n";
			}
		}
	}
	return 0;
}