#include<iostream>
using namespace std;

/*
	1 sec : 10^8 Computations

	Global Scope : 10^7/10^8
	Main Scope/Functional Scope : 10^5/10^6


*/
int a[10000001] {};

// cout << a[10] << endl;Not Allowed



int main() {


	for (int x : a) {
		cout << x << " ";
	}
}