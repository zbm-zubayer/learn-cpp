#include<bits/stdc++.h>
using namespace std;
// Call By Reference
void swapxy1(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
	cout << "x = " << *x << "\ty = " << *y << endl;
}
void swapxy2(int &x, int &y) {
	int t = x;
	x = y;
	y = t;
	cout << "x = " << x << "\ty = " << y << endl;
}
int main() {
	int a = 10, b = 20;
	swapxy1(&a, &b); // Pass by reference
	cout << "a = " << a << "\ty = " << b << endl;
	cout << endl;
	swapxy2(a, b);
	cout << "a = " << a << "\ty = " << b << endl;

	return 0;
}