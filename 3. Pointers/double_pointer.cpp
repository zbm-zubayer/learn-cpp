#include<bits/stdc++.h>
using namespace std;
void increment1(int** p) {
	**p = **p + 1;
}
void increment2(int** p) {
	*p = *p + 1;
}
void increment3(int** p) {
	p = p + 1;
}

int main() {
	int a = 10;
	int* ap = &a;
	int** app = &ap; // Double pointer => pointer to another pointer variable
	cout << &a << "\t" << ap << endl;
	cout << &ap << "\t" << app << endl;
	cout << *ap << "\t" << *app << "\t" << **app << endl;

	increment1(app);
	cout << **app << endl; // Value changed
	increment2(app);
	cout << *app << endl; // Value changed
	increment3(app);
	cout << app << endl; // Value not changed

	return 0;
}