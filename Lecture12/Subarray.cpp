#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Print the array from 1 index to 4 index.
	// for (int k = 1; k <= 4; k++) {
	// 	cout << a[k] << " ";
	// }
	// cout << endl;

	//Print all the subarrays from 0.
	/*
			0,0 :Print
			0,1 : Print
			0,2
			0,3
			0,4

			0,n-1
	*/

	// for (int EP = 0; EP < n; EP++) {
	// 	//Current EP : EP
	// 	//And Mera subarray kya hain : 0 se EP.

	// 	for (int k = 0; k <= EP; k++) {
	// 		cout << a[k] << " ";
	// 	}
	// 	cout << endl;
	// }

	//Saare Subarray Print Karne hain:
	//Saare Subarray ke sum print karvane hain.
	//Maximum Subarray Sum Print Karvana hain.

	for (int sp = 0; sp < n; sp++) {
		for (int ep = 0; ep < n; ep++) {

			//Subarray : [sp,ep] : Print
			for (int k = sp; k <= ep; k++) {
				cout << a[k] << " ";
			}

			cout << endl;
		}
	}

}