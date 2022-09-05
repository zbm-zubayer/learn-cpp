#include<bits/stdc++.h>
using namespace std;

int main() {
	int i = 10;
	int* iptr = &i; // Integer pointer
	float f = 1.4;
	float* fptr = &f; // Float pointer
	char c = 'a';
	char* cptr = &c; // Character pointer
	int ar[] = {4, 5, 1};
	int* arp = ar; // Integer array pointer
	char cr[] = "Hello";
	char* crp = cr; // Char array pointer

	/*Another special type*/
	int** ipp = &iptr; // double pointer
}