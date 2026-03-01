#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// Method 1:
	//You just want Print in reverse order.
	// for (int i = n - 1; i >= 0; i--) {
	// 	cout << a[i] << " ";
	// }

	// cout << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }

	// cout << endl;

	// //Method 2:
	// int b[n] {};

	/*
		b[0]=a[4]=a[n-1];
		b[1]=a[3]=a[n-2];
		b[2]=a[2]=a[n-3];
		b[3]=a[1];
		b[4]=a[0];

		5 times:

		b[i]=a[n-i-1];

		I have to fill b array.
	*/

	// for (int i = 0, j = n - 1; ((i < n) and (j >= 0)); i++, j--) {
	// 	b[i] = a[j];
	// }

	// for (int i = 0, j = n - 1; i < n; i++, j--) {
	// 	b[i] = a[j];
	// }

	// for (int i = 0; i < n; i++) {
	// 	b[i] = a[n - i - 1];
	// }

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	//Method 3:

	for (int i = 0; i < n / 2; i++) {

		// Swap the pair : (a[i],a[n-i-1])
		int temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}



}
