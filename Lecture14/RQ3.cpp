#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int difference[n + 1] {};
	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int l, r, d;
		cin >> l >> r >> d;

		//Update in Difference array.
		difference[l] += d;
		difference[r + 1] -= d;
	}

	//Now Take Prefix after the end of all the queries.
	for (int i = 1; i < n; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}

	for (int i = 0; i < n; i++) {
		a[i] = a[i] + difference[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}