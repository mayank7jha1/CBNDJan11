#include<iostream>
#include<climits>
using namespace std;


int main() {
	/*
		C++ : Maximum value that int can store  : INT_MAX
		Minimum value that int can store : INT_MIN
		Header File : #include<climits>
	*/

	int n;
	cin >> n;
	int a[n] {};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int mini = INT_MAX; //We want to initialise these variable with a
	//   value that can never become your answer.

	int maxi = INT_MIN;

	/*
		Appko har box par jaana hain and check karna hain agar
		mera current box me padi value is smaller than mini than
		upadate mini as we have found a new minimum and similarly
		if my current box element is greater than maxi update
		maxi.
	*/

	for (int i = 0; i < n; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}

	cout << maxi << " " << mini << endl;

	int maxi2 = a[0], mini2 = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] > maxi2) {
			maxi2 = a[i];
		}

		if (a[i] < mini2) {
			mini2 = a[i];
		}
	}

	cout << maxi2 << " " << mini2 << endl;



}