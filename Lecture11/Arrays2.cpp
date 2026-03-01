#include<iostream>
using namespace std;

/*
	In c++ : Static Arrays me aapko hamesha size dena padega.
	Static arrays me it is advised size ko variable mat rakho.

	Global Scope : Can only be used for definition
	Koi Kaam hum global scope me nahi kar sakte
*/

int p = 100;
const int z = 199;
// cin >> z;
// cout << p << endl;//Not Allowed
int b[z];//Not Allowed in general but with const it is allowed.



int main() {

	int n = 89;
	// cout << n << endl;
	// int a[n];In syntax it is allowed but should be always avoid.
	cin >> n;

	//Sizes cannot be negative. (This is not best practice)
	//Assume : User will always give a valid input.

	// if (n <= 0) {
	// 	//Error Throw : Put a valid input for n.
	// }

	// if (n > 0) {

	// }

	int a[n];//user can by mistake give n as -ve or 0.

	//int a[100] : I want to avoid this for extra space.
}
