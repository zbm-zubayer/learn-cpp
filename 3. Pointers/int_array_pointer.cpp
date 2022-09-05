#include<bits/stdc++.h>
using namespace std;

int main() {
	int ar[] = {1, 2, 4, 5};
	int* arp = ar; // interger array pointer
	cout << ar << "\t" << &ar[0] << "\t" << arp << endl; // All same

	arp++;
	/*Adding 4 bytes to &ar[0] since int data type is 4 bytes
	which is basically &ar[1]*/

	cout << arp << "\t" << &ar[1] << endl; // Both has same address

	return 0;
}