#include<bits/stdc++.h>
using namespace std;

int main() {
	char ca[] = "abcde";
	char* cap = ca; // character array pointer
	cout << ca << "\t" << cap << endl;
	cout << &ca << "\t" << &cap << "\t" << *cap << endl;
	cap = &ca[1];
	cout << *cap << endl;
	*cap = ca[1];
	cout << cap << endl;
	return 0;
}