#include<bits/stdc++.h>
using namespace std;
// Call By Value
void swapxy(int x, int y) {
	int t = x;
	x = y;
	y = t;
	cout << "x = " << x << "\ty = " << y << endl;
}
int main() {
	int a = 10, b = 20;
	cout << "a = " << a << "\ty = " << b << endl;
	swapxy(a, b); // Pass by value
	return 0;
}