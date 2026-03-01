#include<iostream>
using namespace std;


int main() {

	int n = 90;//n has a default value.
	cin >> n;//n ki value update hojaayegi ab vo 90 nahi hain vo value hain jo user deraha hain.

	//cout << n << endl;

	int a[n] {}; //Assuming a valid input for n. (value Initialisation)

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];

	}
	cout << sum << endl;



	int sum2 = 0;
	for (int x : a) {
		sum2 += x;
	}

	cout << sum2 << endl;



}